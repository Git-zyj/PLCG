#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1182955205604747154ULL;
unsigned long long int var_3 = 12566471623003230882ULL;
short var_9 = (short)28269;
int zero = 0;
int var_11 = 1472376208;
unsigned int var_12 = 992496833U;
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
