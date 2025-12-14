#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
long long int var_4 = -5373477721831019207LL;
int var_6 = 387537096;
unsigned char var_7 = (unsigned char)93;
unsigned long long int var_8 = 15026162165285700232ULL;
int var_9 = 1177321949;
unsigned char var_10 = (unsigned char)102;
unsigned int var_11 = 3663769842U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 2209126400341321278ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
