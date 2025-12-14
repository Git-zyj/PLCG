#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 19904922;
unsigned char var_6 = (unsigned char)160;
long long int var_12 = 3645873270025097385LL;
int zero = 0;
unsigned short var_15 = (unsigned short)28487;
unsigned short var_16 = (unsigned short)9705;
short var_17 = (short)32129;
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
