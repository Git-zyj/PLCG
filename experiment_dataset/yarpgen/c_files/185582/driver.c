#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1416772776U;
unsigned int var_3 = 141741524U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 7253744125246006404ULL;
signed char var_8 = (signed char)27;
unsigned int var_9 = 1573296174U;
unsigned long long int var_10 = 7520627240487168363ULL;
int var_18 = 1222039733;
int var_19 = -176185401;
int zero = 0;
unsigned short var_20 = (unsigned short)17563;
unsigned long long int var_21 = 6829853451650435182ULL;
int var_22 = -1021688151;
unsigned short var_23 = (unsigned short)47877;
unsigned char var_24 = (unsigned char)165;
void init() {
}

void checksum() {
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
