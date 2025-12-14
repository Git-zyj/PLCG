#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4770;
unsigned int var_2 = 22130844U;
signed char var_3 = (signed char)-70;
short var_4 = (short)8123;
signed char var_6 = (signed char)71;
int var_7 = -1547194076;
unsigned long long int var_8 = 15176713749216745719ULL;
unsigned long long int var_9 = 867050604233495428ULL;
signed char var_11 = (signed char)119;
unsigned short var_12 = (unsigned short)56344;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)3;
int zero = 0;
unsigned long long int var_18 = 4507103159192865108ULL;
int var_19 = -768568330;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)171;
short var_22 = (short)31461;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
