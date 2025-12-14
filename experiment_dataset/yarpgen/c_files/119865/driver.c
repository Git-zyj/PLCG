#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4284040389U;
long long int var_5 = -4311515820725008613LL;
signed char var_6 = (signed char)101;
int var_7 = -328192904;
int zero = 0;
signed char var_11 = (signed char)118;
int var_12 = 719478405;
signed char var_13 = (signed char)-7;
int var_14 = 830446822;
short var_15 = (short)-5583;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
