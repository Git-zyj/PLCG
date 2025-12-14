#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -179927918;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2814471132U;
long long int var_8 = -877887944638363819LL;
unsigned int var_9 = 1188460075U;
int var_13 = 623926152;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)54;
unsigned long long int var_17 = 1471239249749729754ULL;
unsigned char var_18 = (unsigned char)169;
void init() {
}

void checksum() {
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
