#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = -530114819;
signed char var_15 = (signed char)-36;
unsigned long long int var_17 = 5613754062130815610ULL;
int zero = 0;
long long int var_18 = 1129469715593353745LL;
long long int var_19 = 3454152503242258897LL;
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
