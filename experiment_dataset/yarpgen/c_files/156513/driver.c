#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
unsigned long long int var_3 = 15256313323846935467ULL;
unsigned int var_6 = 1466852404U;
unsigned long long int var_7 = 4666273517312168203ULL;
unsigned int var_11 = 2706889694U;
int zero = 0;
int var_18 = 1321508942;
unsigned long long int var_19 = 7783943400714741333ULL;
unsigned int var_20 = 1837551112U;
int var_21 = 883417173;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
