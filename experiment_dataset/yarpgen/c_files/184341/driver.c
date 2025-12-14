#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2102;
short var_2 = (short)-23157;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)58;
short var_6 = (short)23618;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 18242877455837459496ULL;
unsigned int var_11 = 3582406686U;
unsigned long long int var_12 = 7237257921365647970ULL;
signed char var_13 = (signed char)-12;
short var_15 = (short)-21918;
unsigned int var_17 = 3221364053U;
signed char var_18 = (signed char)-9;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2364529511U;
unsigned int var_21 = 2124279020U;
unsigned long long int var_22 = 9997621108703242633ULL;
unsigned short var_23 = (unsigned short)62849;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
