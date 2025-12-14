#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)78;
_Bool var_14 = (_Bool)0;
int var_16 = -518553255;
unsigned long long int var_19 = 6650683541733531361ULL;
int zero = 0;
unsigned long long int var_20 = 4573515348269687594ULL;
short var_21 = (short)20659;
void init() {
}

void checksum() {
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
