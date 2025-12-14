#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -903764592;
unsigned short var_3 = (unsigned short)24182;
long long int var_9 = 7565170052444828751LL;
int zero = 0;
int var_13 = -6701920;
unsigned int var_14 = 2950856976U;
signed char var_15 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
