#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 775227088U;
int var_7 = -2060381149;
unsigned int var_8 = 2709863519U;
int var_9 = 800541652;
int zero = 0;
int var_14 = -635884610;
unsigned int var_15 = 663523834U;
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
