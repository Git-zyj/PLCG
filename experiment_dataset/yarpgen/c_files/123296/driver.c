#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)124;
long long int var_6 = -2816280684250239883LL;
signed char var_8 = (signed char)51;
long long int var_9 = -8392566182153039967LL;
short var_12 = (short)25087;
int zero = 0;
long long int var_13 = 504259352904636390LL;
signed char var_14 = (signed char)93;
unsigned short var_15 = (unsigned short)57923;
unsigned short var_16 = (unsigned short)44718;
unsigned short var_17 = (unsigned short)9671;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
