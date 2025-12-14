#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)186;
unsigned int var_4 = 3573708844U;
unsigned char var_5 = (unsigned char)42;
short var_11 = (short)-30144;
unsigned short var_15 = (unsigned short)17866;
unsigned long long int var_17 = 12766874886483441189ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)221;
long long int var_19 = -1878305902167265469LL;
short var_20 = (short)13234;
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
