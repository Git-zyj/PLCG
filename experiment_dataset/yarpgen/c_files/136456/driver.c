#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2266466103558443242LL;
unsigned short var_4 = (unsigned short)16875;
unsigned short var_7 = (unsigned short)6636;
short var_9 = (short)32149;
unsigned int var_11 = 3852039404U;
int zero = 0;
unsigned long long int var_13 = 13901344871019975374ULL;
short var_14 = (short)-28367;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
