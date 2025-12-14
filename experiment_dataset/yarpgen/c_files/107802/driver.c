#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4127605823644015768LL;
long long int var_6 = 238244744191378977LL;
int zero = 0;
unsigned short var_13 = (unsigned short)9388;
unsigned int var_14 = 3588680183U;
unsigned long long int var_15 = 7275905138359516521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
