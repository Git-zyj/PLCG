#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45922;
unsigned short var_12 = (unsigned short)21216;
unsigned short var_15 = (unsigned short)19495;
unsigned short var_16 = (unsigned short)44039;
unsigned short var_17 = (unsigned short)9969;
int zero = 0;
unsigned short var_19 = (unsigned short)2910;
unsigned short var_20 = (unsigned short)56648;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
