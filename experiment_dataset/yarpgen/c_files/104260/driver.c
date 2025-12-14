#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24529;
int var_5 = 1149233257;
unsigned short var_8 = (unsigned short)11392;
unsigned short var_9 = (unsigned short)25133;
unsigned char var_11 = (unsigned char)11;
signed char var_12 = (signed char)-124;
short var_13 = (short)13558;
int var_15 = 697933794;
long long int var_16 = -5545147362755009392LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 553629987;
long long int var_20 = -979558141078482789LL;
_Bool var_21 = (_Bool)1;
int var_22 = 123065051;
unsigned short var_23 = (unsigned short)15858;
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
