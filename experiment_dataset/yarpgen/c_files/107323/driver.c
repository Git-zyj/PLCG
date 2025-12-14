#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 713037855045930063LL;
int var_3 = 1049964465;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)42969;
unsigned int var_6 = 3976670622U;
unsigned int var_7 = 2866792263U;
long long int var_9 = -2705344555942427958LL;
long long int var_10 = -593028648584228758LL;
unsigned short var_11 = (unsigned short)51829;
unsigned int var_12 = 588227505U;
int zero = 0;
int var_13 = 502657958;
unsigned char var_14 = (unsigned char)241;
signed char var_15 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
