#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13870;
unsigned char var_1 = (unsigned char)190;
long long int var_4 = -2499875148124225860LL;
unsigned char var_6 = (unsigned char)216;
unsigned char var_7 = (unsigned char)143;
long long int var_8 = 1683463967905792851LL;
_Bool var_9 = (_Bool)0;
short var_11 = (short)32274;
int zero = 0;
unsigned long long int var_12 = 9707672858887711339ULL;
signed char var_13 = (signed char)87;
long long int var_14 = 7628492299328617858LL;
unsigned char var_15 = (unsigned char)53;
unsigned short var_16 = (unsigned short)4422;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
