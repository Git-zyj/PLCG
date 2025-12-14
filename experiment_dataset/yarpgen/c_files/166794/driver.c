#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12152736661239860831ULL;
long long int var_10 = -115028639062702501LL;
unsigned long long int var_11 = 3714855549061396525ULL;
unsigned int var_12 = 1567728163U;
long long int var_17 = 5882633267418823037LL;
int zero = 0;
signed char var_19 = (signed char)-71;
short var_20 = (short)2604;
unsigned long long int var_21 = 7840082630300711597ULL;
void init() {
}

void checksum() {
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
