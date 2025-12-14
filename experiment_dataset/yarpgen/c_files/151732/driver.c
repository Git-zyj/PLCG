#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)114;
unsigned long long int var_6 = 16542835416808617684ULL;
unsigned char var_7 = (unsigned char)49;
short var_18 = (short)-5644;
int zero = 0;
unsigned char var_19 = (unsigned char)161;
unsigned char var_20 = (unsigned char)233;
void init() {
}

void checksum() {
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
