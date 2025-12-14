#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24246;
unsigned long long int var_4 = 7696394701509170660ULL;
short var_5 = (short)-8523;
int var_7 = 1639493566;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 4265773938U;
int zero = 0;
short var_16 = (short)26583;
int var_17 = -915406460;
long long int var_18 = 3109062310503498236LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
