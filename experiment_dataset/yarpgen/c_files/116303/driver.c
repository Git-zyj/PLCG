#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39179;
unsigned int var_6 = 2728735623U;
unsigned long long int var_7 = 3083538103557227096ULL;
unsigned short var_9 = (unsigned short)9408;
unsigned int var_11 = 4270850497U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 2833073692246033469LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
