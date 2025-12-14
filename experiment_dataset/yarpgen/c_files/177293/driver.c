#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 771579838;
unsigned int var_2 = 1995365968U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)22626;
unsigned long long int var_6 = 14085869032645280600ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)251;
long long int var_12 = 2127406835667461312LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
