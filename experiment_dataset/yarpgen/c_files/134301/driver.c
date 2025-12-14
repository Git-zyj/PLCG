#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
short var_2 = (short)-18467;
short var_3 = (short)13011;
int var_4 = 2013434673;
signed char var_6 = (signed char)17;
short var_9 = (short)-20242;
unsigned int var_12 = 1746614586U;
int zero = 0;
unsigned int var_13 = 534411732U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1278307202U;
unsigned int var_16 = 4074215114U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
