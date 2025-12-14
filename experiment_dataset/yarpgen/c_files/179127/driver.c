#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7540377076905291440ULL;
unsigned short var_3 = (unsigned short)39687;
unsigned short var_4 = (unsigned short)59453;
unsigned short var_5 = (unsigned short)2383;
unsigned char var_9 = (unsigned char)80;
int zero = 0;
unsigned long long int var_10 = 13303883451289188351ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -2098365556;
long long int var_13 = 842865383483963233LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
