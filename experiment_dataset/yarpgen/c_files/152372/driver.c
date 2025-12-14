#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14029711694561322162ULL;
signed char var_8 = (signed char)70;
signed char var_10 = (signed char)-92;
unsigned long long int var_13 = 13956468296072676513ULL;
int zero = 0;
long long int var_14 = 2341805464333963574LL;
unsigned long long int var_15 = 2885245471286185539ULL;
void init() {
}

void checksum() {
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
