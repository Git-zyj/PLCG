#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5072262602612959442LL;
int var_6 = 1118793361;
unsigned short var_7 = (unsigned short)17732;
unsigned short var_9 = (unsigned short)26314;
signed char var_10 = (signed char)30;
long long int var_11 = 1118565933631358211LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56922;
signed char var_14 = (signed char)72;
unsigned char var_15 = (unsigned char)54;
void init() {
}

void checksum() {
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
