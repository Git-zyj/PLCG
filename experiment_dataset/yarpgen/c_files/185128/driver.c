#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -16081296;
unsigned char var_2 = (unsigned char)159;
signed char var_3 = (signed char)111;
signed char var_5 = (signed char)-6;
unsigned int var_6 = 3121073654U;
int var_10 = 1934633244;
int var_13 = -1590216299;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3310644592U;
unsigned int var_20 = 1082845470U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
