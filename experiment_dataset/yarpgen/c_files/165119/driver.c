#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1023071517;
signed char var_18 = (signed char)-121;
int zero = 0;
int var_20 = 773779271;
unsigned short var_21 = (unsigned short)34917;
unsigned int var_22 = 2735448743U;
unsigned long long int var_23 = 14772579081670982737ULL;
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
