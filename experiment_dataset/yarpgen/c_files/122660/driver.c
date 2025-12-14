#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 4789949704056952715ULL;
unsigned long long int var_13 = 16389038983619573819ULL;
int zero = 0;
long long int var_16 = 5772696735737249193LL;
unsigned long long int var_17 = 13548973996958897505ULL;
unsigned long long int var_18 = 5082841739004532455ULL;
signed char var_19 = (signed char)-1;
signed char var_20 = (signed char)-96;
unsigned long long int var_21 = 11847010100253409467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
