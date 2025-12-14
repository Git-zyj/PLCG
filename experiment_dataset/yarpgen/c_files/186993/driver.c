#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 237317435U;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 2873673164319795216LL;
short var_21 = (short)5353;
unsigned char var_22 = (unsigned char)190;
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
