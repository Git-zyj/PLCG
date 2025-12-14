#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48580;
long long int var_9 = -3138657169433113944LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2578098U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7439220554565588755LL;
_Bool var_16 = (_Bool)0;
int var_17 = 1566956447;
long long int var_18 = 7760404439423615346LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
