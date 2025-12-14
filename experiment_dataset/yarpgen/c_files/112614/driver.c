#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1343457818026740LL;
unsigned char var_5 = (unsigned char)224;
unsigned char var_12 = (unsigned char)248;
short var_16 = (short)-11814;
unsigned long long int var_17 = 13303969894851291779ULL;
int zero = 0;
long long int var_20 = -1707537459764870828LL;
unsigned char var_21 = (unsigned char)99;
unsigned int var_22 = 2061770432U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
