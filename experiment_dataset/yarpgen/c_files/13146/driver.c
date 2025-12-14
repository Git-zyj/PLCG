#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1922057142769716662ULL;
unsigned short var_8 = (unsigned short)32771;
unsigned int var_10 = 742156078U;
unsigned short var_11 = (unsigned short)45210;
signed char var_12 = (signed char)-56;
unsigned int var_17 = 98928834U;
int zero = 0;
short var_20 = (short)13155;
unsigned short var_21 = (unsigned short)50820;
long long int var_22 = -6261826087280438589LL;
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
