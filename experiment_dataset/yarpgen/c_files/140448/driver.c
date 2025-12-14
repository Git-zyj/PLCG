#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)235;
unsigned long long int var_6 = 9155239473106235260ULL;
unsigned int var_7 = 3969519488U;
unsigned long long int var_9 = 2885999990523618804ULL;
unsigned int var_14 = 1555690284U;
int zero = 0;
unsigned long long int var_15 = 9113293576292085661ULL;
_Bool var_16 = (_Bool)1;
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
