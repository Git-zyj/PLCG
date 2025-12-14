#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1894397815U;
signed char var_7 = (signed char)95;
long long int var_10 = 5007258391886400381LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 9160699289582874944ULL;
int zero = 0;
unsigned long long int var_15 = 6518545638369108245ULL;
short var_16 = (short)31051;
unsigned long long int var_17 = 18320944863178771793ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
