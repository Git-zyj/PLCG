#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)244;
unsigned long long int var_7 = 13434508504642908367ULL;
unsigned int var_8 = 118028423U;
short var_10 = (short)-25498;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 665234673U;
int zero = 0;
unsigned long long int var_15 = 2684871954122075306ULL;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
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
