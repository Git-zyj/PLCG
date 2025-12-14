#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2043597313;
unsigned short var_18 = (unsigned short)12652;
int zero = 0;
unsigned long long int var_19 = 4696512741005809992ULL;
signed char var_20 = (signed char)47;
unsigned int var_21 = 1306440424U;
signed char var_22 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
