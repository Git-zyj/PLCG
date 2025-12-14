#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3479206973U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 15840326647478267749ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)41;
short var_13 = (short)-7697;
void init() {
}

void checksum() {
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
