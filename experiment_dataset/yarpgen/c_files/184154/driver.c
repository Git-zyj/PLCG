#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3184458798501761208LL;
short var_3 = (short)6960;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)107;
int var_10 = 1479229383;
int zero = 0;
long long int var_12 = 7188398956620912031LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 529540166U;
unsigned char var_15 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
