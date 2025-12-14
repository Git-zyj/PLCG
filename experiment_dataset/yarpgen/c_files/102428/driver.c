#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned long long int var_1 = 11213588706483998251ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 421422426U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 54745569U;
unsigned long long int var_20 = 8665183010339750762ULL;
unsigned char var_21 = (unsigned char)96;
unsigned long long int var_22 = 2214260258686071826ULL;
unsigned int var_23 = 4129991137U;
unsigned char var_24 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
