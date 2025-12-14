#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 337317703;
unsigned long long int var_6 = 3593245517530907420ULL;
int var_17 = 1031838960;
int zero = 0;
unsigned char var_19 = (unsigned char)21;
unsigned char var_20 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
