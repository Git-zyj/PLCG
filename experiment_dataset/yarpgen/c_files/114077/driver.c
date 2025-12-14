#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned long long int var_3 = 2319240729357255598ULL;
unsigned int var_8 = 3358123325U;
long long int var_12 = 5019781603329449639LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)54789;
unsigned short var_19 = (unsigned short)21375;
signed char var_20 = (signed char)87;
void init() {
}

void checksum() {
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
