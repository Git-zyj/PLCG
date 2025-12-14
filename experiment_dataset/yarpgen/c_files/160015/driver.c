#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
signed char var_2 = (signed char)-76;
unsigned short var_6 = (unsigned short)9882;
unsigned long long int var_7 = 3404239589117473246ULL;
unsigned long long int var_8 = 6800154317109669998ULL;
int zero = 0;
unsigned int var_10 = 2656524559U;
unsigned long long int var_11 = 16232720353739712628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
