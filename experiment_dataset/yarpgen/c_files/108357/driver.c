#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8653;
_Bool var_4 = (_Bool)0;
short var_5 = (short)17818;
unsigned short var_8 = (unsigned short)51876;
unsigned long long int var_12 = 4928418883937342324ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-58;
unsigned char var_17 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
