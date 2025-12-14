#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30063;
_Bool var_4 = (_Bool)0;
int var_5 = 1180981678;
int var_8 = -2026734645;
int var_16 = -674674918;
unsigned long long int var_18 = 5537600859869191550ULL;
int zero = 0;
signed char var_20 = (signed char)9;
long long int var_21 = 6494676870443907862LL;
int var_22 = -655905206;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
