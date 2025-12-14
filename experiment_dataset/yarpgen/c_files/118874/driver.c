#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -365319199;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)61573;
_Bool var_15 = (_Bool)0;
signed char var_18 = (signed char)99;
signed char var_19 = (signed char)-79;
int zero = 0;
signed char var_20 = (signed char)-69;
int var_21 = -1320504656;
signed char var_22 = (signed char)-8;
unsigned short var_23 = (unsigned short)41608;
void init() {
}

void checksum() {
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
