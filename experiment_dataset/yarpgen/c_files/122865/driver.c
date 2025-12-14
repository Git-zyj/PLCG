#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)87;
unsigned long long int var_6 = 9103478281063673728ULL;
unsigned int var_14 = 2790782355U;
int zero = 0;
unsigned short var_19 = (unsigned short)7080;
unsigned int var_20 = 1158340712U;
unsigned int var_21 = 2919866179U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
