#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned char var_1 = (unsigned char)28;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)48938;
signed char var_4 = (signed char)80;
int var_7 = 1455377627;
int var_8 = 320175886;
unsigned int var_9 = 3291664891U;
int var_10 = -37809831;
int var_11 = 1671019694;
int zero = 0;
signed char var_12 = (signed char)14;
int var_13 = 802222037;
unsigned long long int var_14 = 16892143870761356659ULL;
unsigned char var_15 = (unsigned char)93;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
