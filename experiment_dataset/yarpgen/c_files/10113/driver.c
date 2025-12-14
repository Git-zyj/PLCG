#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1924186942U;
unsigned long long int var_8 = 3674052813671234830ULL;
unsigned short var_10 = (unsigned short)51713;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2534393033U;
short var_16 = (short)15090;
int var_17 = -1448353002;
int zero = 0;
unsigned short var_18 = (unsigned short)22093;
unsigned int var_19 = 3124210821U;
unsigned int var_20 = 663740720U;
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
