#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11852616491285261129ULL;
signed char var_4 = (signed char)-42;
signed char var_10 = (signed char)-23;
int zero = 0;
signed char var_14 = (signed char)-2;
signed char var_15 = (signed char)-39;
unsigned long long int var_16 = 10173341970996788983ULL;
void init() {
}

void checksum() {
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
