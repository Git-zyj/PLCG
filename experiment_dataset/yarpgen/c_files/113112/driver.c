#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41984;
signed char var_2 = (signed char)-97;
unsigned long long int var_11 = 5669654281701881241ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)7078;
long long int var_14 = 3143884114622559709LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
