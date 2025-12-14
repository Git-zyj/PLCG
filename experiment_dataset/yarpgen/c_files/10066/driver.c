#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
int var_5 = 1656530563;
signed char var_6 = (signed char)-118;
int var_7 = -1863491910;
int var_8 = 659416821;
int zero = 0;
unsigned long long int var_14 = 17320330688506004516ULL;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)117;
unsigned int var_17 = 562076638U;
signed char var_18 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
