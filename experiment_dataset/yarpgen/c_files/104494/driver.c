#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 297124116559314497ULL;
int var_10 = -1379964310;
signed char var_11 = (signed char)-16;
int var_12 = 172029991;
int zero = 0;
unsigned int var_15 = 1828459458U;
int var_16 = -166870300;
void init() {
}

void checksum() {
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
