#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3328720246U;
unsigned long long int var_16 = 8753350296332275619ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5002904279206651860ULL;
int zero = 0;
signed char var_20 = (signed char)-112;
unsigned char var_21 = (unsigned char)3;
unsigned int var_22 = 1403309569U;
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
