#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8198505588375508389ULL;
long long int var_2 = -2555824910367120333LL;
unsigned int var_14 = 384236669U;
int zero = 0;
signed char var_15 = (signed char)-85;
unsigned int var_16 = 739701181U;
void init() {
}

void checksum() {
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
