#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
int var_9 = -1028206194;
unsigned short var_10 = (unsigned short)39992;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)59472;
long long int var_14 = 2676064322083628394LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1387058136;
long long int var_17 = -9199192102947436702LL;
unsigned char var_18 = (unsigned char)246;
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
