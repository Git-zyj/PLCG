#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
unsigned long long int var_6 = 13779068588270493918ULL;
unsigned char var_7 = (unsigned char)47;
unsigned long long int var_8 = 12505161108756581216ULL;
unsigned long long int var_9 = 16578222135708720967ULL;
int zero = 0;
short var_15 = (short)8607;
unsigned char var_16 = (unsigned char)68;
short var_17 = (short)-133;
void init() {
}

void checksum() {
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
