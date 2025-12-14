#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-18257;
int var_13 = 797234039;
long long int var_14 = -3427285640903200301LL;
int zero = 0;
unsigned short var_16 = (unsigned short)37882;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)48;
void init() {
}

void checksum() {
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
