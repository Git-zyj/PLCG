#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned char var_3 = (unsigned char)94;
unsigned int var_4 = 2841548428U;
unsigned int var_7 = 1045225536U;
unsigned int var_10 = 886629683U;
int zero = 0;
unsigned long long int var_11 = 15852587755711789839ULL;
unsigned int var_12 = 507863151U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
