#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1973801710U;
_Bool var_5 = (_Bool)0;
int var_6 = -1649963281;
unsigned int var_7 = 2670446751U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)252;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-9604;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
