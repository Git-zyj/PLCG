#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2210555264U;
unsigned char var_6 = (unsigned char)148;
int var_10 = -1364904345;
int zero = 0;
unsigned long long int var_11 = 16206016515368925547ULL;
unsigned long long int var_12 = 16073731479191966178ULL;
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
