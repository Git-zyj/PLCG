#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 347824294U;
int var_7 = 805540657;
unsigned int var_10 = 2071708639U;
int var_14 = 1345722921;
int zero = 0;
int var_20 = 961623780;
unsigned short var_21 = (unsigned short)59030;
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
