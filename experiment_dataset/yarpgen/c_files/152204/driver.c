#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 263602219040696414ULL;
unsigned char var_3 = (unsigned char)74;
unsigned long long int var_5 = 16893837323208353289ULL;
unsigned int var_6 = 3782821004U;
int var_8 = 553918975;
long long int var_12 = 9121059503190168882LL;
int zero = 0;
signed char var_15 = (signed char)-56;
unsigned long long int var_16 = 13199405464840333380ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2758340459U;
long long int var_19 = -2625520328260593728LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
