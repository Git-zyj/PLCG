#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2736473675663906877LL;
unsigned short var_5 = (unsigned short)39029;
unsigned short var_9 = (unsigned short)63266;
unsigned short var_10 = (unsigned short)49420;
long long int var_13 = -8488255081255370216LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6050910745234877447LL;
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
