#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 1827710220U;
long long int var_8 = 1905021229866137766LL;
unsigned int var_10 = 313442765U;
unsigned char var_11 = (unsigned char)9;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)59579;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2223075054U;
unsigned int var_22 = 3914566100U;
long long int var_23 = -1307136079073604532LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
