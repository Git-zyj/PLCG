#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1811541166;
unsigned long long int var_2 = 16798498695287380196ULL;
unsigned int var_3 = 82860245U;
short var_7 = (short)-15199;
int var_8 = -2138612112;
int zero = 0;
unsigned int var_10 = 3021371792U;
int var_11 = -1637405053;
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
