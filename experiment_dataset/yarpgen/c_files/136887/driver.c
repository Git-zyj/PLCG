#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1161259171;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2352457881U;
long long int var_9 = -486654704267038847LL;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
int var_15 = 1332667490;
_Bool var_16 = (_Bool)0;
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
