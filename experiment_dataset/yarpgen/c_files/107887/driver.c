#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-86;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10728340043749738601ULL;
int var_14 = -1777381849;
int zero = 0;
signed char var_19 = (signed char)-96;
unsigned char var_20 = (unsigned char)31;
void init() {
}

void checksum() {
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
