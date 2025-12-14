#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1140622742;
unsigned char var_3 = (unsigned char)42;
long long int var_14 = -6210478110531464953LL;
unsigned short var_15 = (unsigned short)26088;
unsigned long long int var_17 = 4492233993258471273ULL;
int zero = 0;
unsigned long long int var_18 = 16073379177847976367ULL;
unsigned short var_19 = (unsigned short)28207;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
