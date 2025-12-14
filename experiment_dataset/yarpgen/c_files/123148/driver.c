#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)254;
unsigned long long int var_13 = 13950638426520697283ULL;
int zero = 0;
unsigned long long int var_18 = 1400997362968586327ULL;
signed char var_19 = (signed char)-14;
int var_20 = -821399438;
unsigned int var_21 = 4187027885U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
