#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1967836412U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 14105216569393165369ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1387318228U;
unsigned long long int var_14 = 13536228427588034568ULL;
int zero = 0;
unsigned int var_16 = 1861369059U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)91;
unsigned int var_19 = 1236226982U;
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
