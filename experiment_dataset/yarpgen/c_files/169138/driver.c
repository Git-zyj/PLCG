#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1942517236;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 789080960U;
int var_10 = 1577565366;
int var_11 = 1244971970;
int var_12 = -1436299365;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
short var_20 = (short)15249;
unsigned long long int var_21 = 10271831382583434394ULL;
void init() {
}

void checksum() {
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
