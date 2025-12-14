#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
unsigned int var_12 = 597599086U;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6271637590284430207LL;
unsigned int var_23 = 2082259714U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
