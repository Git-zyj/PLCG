#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-91;
signed char var_8 = (signed char)42;
unsigned int var_9 = 2437008616U;
int zero = 0;
signed char var_10 = (signed char)-70;
signed char var_11 = (signed char)-105;
int var_12 = 2076809926;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
