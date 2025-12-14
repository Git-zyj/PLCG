#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
unsigned char var_6 = (unsigned char)108;
unsigned short var_7 = (unsigned short)20463;
long long int var_8 = -8695178374102596182LL;
unsigned short var_10 = (unsigned short)27286;
int var_12 = -361774393;
unsigned long long int var_14 = 2624031269486722453ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)34;
unsigned int var_21 = 1529845664U;
long long int var_22 = 6552031601219828168LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
