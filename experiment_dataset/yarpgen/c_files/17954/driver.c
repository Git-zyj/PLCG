#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53667;
unsigned char var_6 = (unsigned char)233;
unsigned short var_10 = (unsigned short)32043;
unsigned short var_11 = (unsigned short)355;
unsigned short var_12 = (unsigned short)3387;
unsigned short var_13 = (unsigned short)9761;
int zero = 0;
unsigned short var_14 = (unsigned short)47047;
int var_15 = -491058194;
void init() {
}

void checksum() {
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
