#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 18142304587213287766ULL;
unsigned long long int var_14 = 11610351610041221777ULL;
short var_19 = (short)-7651;
int zero = 0;
signed char var_20 = (signed char)-13;
unsigned long long int var_21 = 691090392118837911ULL;
unsigned long long int var_22 = 9501579239323815161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
