#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1758277021U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11747486673198052697ULL;
unsigned short var_3 = (unsigned short)36895;
short var_5 = (short)-17790;
int var_8 = 1998391790;
short var_9 = (short)20519;
unsigned char var_11 = (unsigned char)133;
unsigned int var_12 = 2809405348U;
unsigned long long int var_13 = 7655178308310131619ULL;
short var_14 = (short)-17096;
unsigned long long int var_15 = 4631919088863317623ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)40201;
int zero = 0;
signed char var_19 = (signed char)-100;
_Bool var_20 = (_Bool)0;
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
