#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19932;
unsigned long long int var_1 = 12104238793928089589ULL;
signed char var_2 = (signed char)17;
short var_4 = (short)-32105;
unsigned char var_12 = (unsigned char)134;
int zero = 0;
unsigned short var_16 = (unsigned short)18280;
unsigned short var_17 = (unsigned short)44954;
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
