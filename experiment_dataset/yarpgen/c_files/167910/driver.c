#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned char var_2 = (unsigned char)13;
unsigned int var_4 = 3160317729U;
unsigned int var_5 = 2753846646U;
short var_6 = (short)7614;
long long int var_7 = -1916153945958112637LL;
unsigned short var_10 = (unsigned short)19573;
int var_11 = 630376853;
unsigned long long int var_12 = 3348442017140447685ULL;
int zero = 0;
signed char var_13 = (signed char)47;
unsigned short var_14 = (unsigned short)7864;
long long int var_15 = 8469316259007382765LL;
unsigned int var_16 = 1408382611U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
