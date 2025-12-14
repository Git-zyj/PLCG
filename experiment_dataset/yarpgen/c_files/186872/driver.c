#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-116;
unsigned int var_2 = 2380402408U;
unsigned long long int var_18 = 12044471358836149888ULL;
int zero = 0;
unsigned long long int var_20 = 3360910337846919250ULL;
unsigned short var_21 = (unsigned short)41799;
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
