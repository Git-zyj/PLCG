#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)152;
int var_10 = -1086010588;
unsigned short var_12 = (unsigned short)29560;
unsigned short var_13 = (unsigned short)28499;
int zero = 0;
unsigned short var_14 = (unsigned short)39755;
unsigned short var_15 = (unsigned short)2700;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)23697;
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
