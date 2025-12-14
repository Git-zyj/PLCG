#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2512812155U;
signed char var_12 = (signed char)-61;
unsigned long long int var_15 = 8665944754750748888ULL;
signed char var_16 = (signed char)-61;
int zero = 0;
unsigned int var_18 = 2390071610U;
int var_19 = -850799518;
signed char var_20 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
