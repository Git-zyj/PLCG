#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15975535964263086812ULL;
unsigned long long int var_3 = 2694417287405086516ULL;
int zero = 0;
unsigned long long int var_16 = 2903224365412183534ULL;
signed char var_17 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
