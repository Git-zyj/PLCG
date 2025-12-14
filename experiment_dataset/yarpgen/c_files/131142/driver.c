#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)2164;
unsigned long long int var_10 = 277257591160752599ULL;
long long int var_11 = -7348941014616805818LL;
int zero = 0;
unsigned long long int var_18 = 14724080285346201208ULL;
int var_19 = -1349670571;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
