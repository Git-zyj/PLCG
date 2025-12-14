#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned int var_3 = 3427792910U;
unsigned long long int var_4 = 8124440450726958265ULL;
long long int var_5 = 2350885231731975368LL;
signed char var_9 = (signed char)70;
int zero = 0;
unsigned char var_11 = (unsigned char)33;
unsigned int var_12 = 941121016U;
unsigned char var_13 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
