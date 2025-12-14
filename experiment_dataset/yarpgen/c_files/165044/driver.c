#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1991037303;
long long int var_2 = 3430618310909732189LL;
signed char var_3 = (signed char)-68;
signed char var_10 = (signed char)53;
int zero = 0;
long long int var_11 = -5510933853794198872LL;
int var_12 = -733699696;
short var_13 = (short)27380;
unsigned char var_14 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
