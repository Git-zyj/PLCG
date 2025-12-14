#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3654716965U;
_Bool var_2 = (_Bool)1;
long long int var_5 = -2640511265898661061LL;
unsigned long long int var_6 = 2776483493253575665ULL;
signed char var_7 = (signed char)4;
unsigned int var_8 = 1297496771U;
unsigned long long int var_9 = 2264496259138323136ULL;
int var_10 = -1921536193;
unsigned short var_11 = (unsigned short)59905;
unsigned long long int var_12 = 11936125368597480629ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -1830241993;
int zero = 0;
unsigned int var_17 = 4120734206U;
unsigned short var_18 = (unsigned short)38310;
unsigned short var_19 = (unsigned short)24908;
void init() {
}

void checksum() {
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
