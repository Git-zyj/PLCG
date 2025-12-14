#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned int var_6 = 1572487431U;
unsigned long long int var_14 = 1596960222255321639ULL;
unsigned long long int var_15 = 8795083483262514216ULL;
unsigned long long int var_17 = 12523898219062021547ULL;
signed char var_18 = (signed char)6;
int zero = 0;
signed char var_19 = (signed char)-98;
unsigned long long int var_20 = 2292299556796135773ULL;
signed char var_21 = (signed char)42;
unsigned long long int var_22 = 14042377755846670639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
