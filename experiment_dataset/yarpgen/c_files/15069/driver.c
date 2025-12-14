#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 182214688;
unsigned long long int var_8 = 7149409654937363077ULL;
int zero = 0;
int var_10 = -1120330489;
unsigned short var_11 = (unsigned short)39646;
unsigned long long int var_12 = 2403388805697164950ULL;
unsigned long long int var_13 = 15800411722303903331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
