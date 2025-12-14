#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned int var_4 = 3966795503U;
unsigned char var_6 = (unsigned char)10;
signed char var_10 = (signed char)62;
unsigned long long int var_12 = 15363388740747584196ULL;
long long int var_13 = 7389672938583623137LL;
signed char var_14 = (signed char)119;
int zero = 0;
unsigned char var_15 = (unsigned char)180;
short var_16 = (short)-31408;
unsigned long long int var_17 = 6333131147668314364ULL;
short var_18 = (short)14416;
unsigned long long int var_19 = 5350362013131689487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
