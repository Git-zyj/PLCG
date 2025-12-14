#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_10 = -5223004705802390957LL;
unsigned char var_12 = (unsigned char)24;
unsigned short var_14 = (unsigned short)9346;
unsigned short var_17 = (unsigned short)52250;
unsigned int var_19 = 1880633784U;
int zero = 0;
long long int var_20 = 2337004599336022LL;
signed char var_21 = (signed char)15;
unsigned short var_22 = (unsigned short)14259;
unsigned char var_23 = (unsigned char)13;
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
