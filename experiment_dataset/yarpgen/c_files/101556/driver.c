#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-114;
int var_10 = 365363261;
unsigned long long int var_13 = 6894661823210130391ULL;
unsigned char var_14 = (unsigned char)89;
unsigned char var_15 = (unsigned char)247;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)185;
int var_19 = -214537942;
int zero = 0;
signed char var_20 = (signed char)73;
long long int var_21 = 7275063721921403638LL;
signed char var_22 = (signed char)118;
int var_23 = -1553476281;
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
