#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1782229057;
signed char var_12 = (signed char)-63;
unsigned int var_13 = 2201600113U;
unsigned char var_14 = (unsigned char)250;
unsigned int var_15 = 363522965U;
long long int var_17 = -824245042200736148LL;
unsigned long long int var_18 = 1685784367165809154ULL;
int zero = 0;
int var_19 = 965780468;
int var_20 = -763239886;
signed char var_21 = (signed char)-123;
unsigned int var_22 = 1763730258U;
unsigned short var_23 = (unsigned short)64330;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
