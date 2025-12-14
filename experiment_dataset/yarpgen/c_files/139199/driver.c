#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3486;
signed char var_4 = (signed char)-98;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-1;
short var_8 = (short)6070;
unsigned short var_9 = (unsigned short)6919;
int var_10 = 37288542;
unsigned short var_13 = (unsigned short)36619;
int zero = 0;
unsigned short var_15 = (unsigned short)15395;
signed char var_16 = (signed char)-83;
unsigned short var_17 = (unsigned short)22511;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
