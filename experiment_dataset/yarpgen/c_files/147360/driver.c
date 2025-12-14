#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1378010646;
unsigned char var_4 = (unsigned char)123;
unsigned long long int var_6 = 9478283982366565937ULL;
unsigned long long int var_7 = 6179621680272425338ULL;
signed char var_10 = (signed char)40;
unsigned int var_13 = 2429814239U;
unsigned long long int var_14 = 11281214691210216485ULL;
int zero = 0;
unsigned int var_16 = 1733946687U;
unsigned char var_17 = (unsigned char)57;
int var_18 = 1617548893;
unsigned int var_19 = 3665096750U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
