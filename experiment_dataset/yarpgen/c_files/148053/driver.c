#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
unsigned int var_2 = 1068171244U;
unsigned long long int var_3 = 3906441103618456108ULL;
int var_6 = -23965431;
int var_7 = 897030741;
int var_9 = -2116150530;
int zero = 0;
unsigned int var_10 = 1247344313U;
signed char var_11 = (signed char)-113;
unsigned int var_12 = 437531722U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
