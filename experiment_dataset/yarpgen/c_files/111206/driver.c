#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
int var_3 = -1309518866;
_Bool var_10 = (_Bool)1;
int var_11 = -959977744;
int zero = 0;
long long int var_12 = 5489745833631122371LL;
short var_13 = (short)30389;
unsigned char var_14 = (unsigned char)11;
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
