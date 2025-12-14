#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-748;
long long int var_9 = -2189630617533412697LL;
int var_11 = -593352478;
_Bool var_15 = (_Bool)1;
short var_16 = (short)24519;
int zero = 0;
int var_18 = -1588388502;
unsigned char var_19 = (unsigned char)204;
unsigned char var_20 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
