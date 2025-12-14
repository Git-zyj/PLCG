#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1082726322677928858LL;
unsigned short var_5 = (unsigned short)47040;
short var_10 = (short)30097;
unsigned short var_13 = (unsigned short)5272;
long long int var_15 = -2607405073916614065LL;
int zero = 0;
unsigned short var_18 = (unsigned short)47268;
signed char var_19 = (signed char)49;
void init() {
}

void checksum() {
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
