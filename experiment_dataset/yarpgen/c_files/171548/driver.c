#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)178;
int var_6 = -1527102995;
unsigned char var_7 = (unsigned char)226;
unsigned char var_10 = (unsigned char)136;
unsigned int var_11 = 1048040900U;
int zero = 0;
long long int var_12 = -4940985705102587958LL;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
