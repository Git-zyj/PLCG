#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3508230910300162251LL;
unsigned int var_1 = 2717118265U;
unsigned long long int var_2 = 6731967994653180969ULL;
unsigned long long int var_3 = 15230670385551234257ULL;
unsigned int var_4 = 2419800505U;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)134;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 2380769933U;
int var_16 = 843569251;
int zero = 0;
unsigned long long int var_17 = 16919829990215074863ULL;
unsigned long long int var_18 = 13650251676941956735ULL;
signed char var_19 = (signed char)-92;
unsigned int var_20 = 3173721286U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
