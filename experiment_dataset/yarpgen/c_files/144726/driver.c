#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9108403151246646781LL;
int var_1 = -255364530;
int var_3 = -2002986009;
short var_6 = (short)-29402;
unsigned short var_7 = (unsigned short)59455;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 14471501444702832229ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7771292104259356229LL;
short var_13 = (short)29818;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
