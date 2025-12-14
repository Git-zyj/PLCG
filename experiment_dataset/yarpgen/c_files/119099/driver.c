#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4152626120U;
unsigned int var_1 = 1362011284U;
unsigned int var_5 = 4115356903U;
unsigned int var_16 = 3794255374U;
int zero = 0;
unsigned int var_18 = 1173742323U;
unsigned int var_19 = 2219289066U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
