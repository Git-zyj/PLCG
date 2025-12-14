#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_10 = -1256225221;
unsigned short var_11 = (unsigned short)62554;
unsigned int var_15 = 1860461039U;
int zero = 0;
unsigned short var_17 = (unsigned short)25373;
unsigned int var_18 = 3233150437U;
long long int var_19 = 8696797223285277310LL;
signed char var_20 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
