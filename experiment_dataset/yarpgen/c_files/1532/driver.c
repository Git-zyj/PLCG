#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2692340571U;
unsigned long long int var_10 = 9447618162989696783ULL;
unsigned short var_11 = (unsigned short)56315;
int zero = 0;
signed char var_17 = (signed char)-116;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
