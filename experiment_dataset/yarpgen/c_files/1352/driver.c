#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)54480;
int var_15 = -1469940923;
int var_19 = -1851280508;
int zero = 0;
signed char var_20 = (signed char)-97;
unsigned short var_21 = (unsigned short)4498;
unsigned long long int var_22 = 11644635619358073914ULL;
void init() {
}

void checksum() {
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
