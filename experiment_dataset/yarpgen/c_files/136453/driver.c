#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3649134367U;
long long int var_4 = 4686372632443752841LL;
unsigned short var_6 = (unsigned short)11316;
short var_8 = (short)24464;
signed char var_9 = (signed char)51;
int zero = 0;
int var_11 = 1057800612;
unsigned char var_12 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
