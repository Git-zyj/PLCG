#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7062557867029445888ULL;
unsigned long long int var_3 = 11846490464847671545ULL;
unsigned int var_4 = 295575316U;
int var_5 = 1862876089;
unsigned int var_6 = 406686564U;
long long int var_7 = -632094324935702488LL;
unsigned long long int var_9 = 5336518540468836810ULL;
long long int var_10 = -2619681655961478424LL;
short var_11 = (short)19388;
unsigned int var_12 = 3598676722U;
signed char var_14 = (signed char)14;
int zero = 0;
unsigned long long int var_15 = 17158234203147998971ULL;
int var_16 = -828657549;
int var_17 = -1143901936;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
