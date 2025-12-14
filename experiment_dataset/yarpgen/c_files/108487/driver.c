#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7631645216844040418ULL;
_Bool var_3 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)80;
unsigned int var_14 = 3988878646U;
unsigned char var_15 = (unsigned char)234;
signed char var_16 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
