#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17488297206618454982ULL;
unsigned int var_4 = 971416176U;
unsigned int var_6 = 16271218U;
unsigned int var_8 = 2297186918U;
int var_9 = 1742752784;
_Bool var_10 = (_Bool)1;
int var_11 = -745391520;
int zero = 0;
signed char var_14 = (signed char)13;
_Bool var_15 = (_Bool)0;
long long int var_16 = -414262271456026087LL;
unsigned char var_17 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
