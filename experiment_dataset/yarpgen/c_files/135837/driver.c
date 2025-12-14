#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
unsigned long long int var_2 = 6444844562262442971ULL;
signed char var_5 = (signed char)-88;
signed char var_8 = (signed char)114;
int zero = 0;
unsigned int var_12 = 3430225078U;
unsigned int var_13 = 825409636U;
signed char var_14 = (signed char)63;
long long int var_15 = -2270231564611205733LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
