#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)17830;
short var_9 = (short)-30701;
unsigned long long int var_13 = 16630820226711111356ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)216;
unsigned short var_17 = (unsigned short)33014;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
