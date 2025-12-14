#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1197899567U;
unsigned short var_4 = (unsigned short)42235;
long long int var_17 = -6553386116873027951LL;
int zero = 0;
unsigned int var_20 = 202087966U;
unsigned int var_21 = 2927170911U;
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
