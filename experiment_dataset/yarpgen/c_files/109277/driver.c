#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 93518932U;
unsigned short var_6 = (unsigned short)62525;
int var_11 = -401030708;
int zero = 0;
long long int var_20 = 3505235205597380291LL;
unsigned int var_21 = 809428994U;
unsigned long long int var_22 = 12429230607758441518ULL;
_Bool var_23 = (_Bool)1;
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
