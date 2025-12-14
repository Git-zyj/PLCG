#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44582;
unsigned long long int var_2 = 209040283043475795ULL;
short var_5 = (short)-3847;
unsigned long long int var_10 = 1445034355770246541ULL;
unsigned short var_15 = (unsigned short)42893;
long long int var_16 = -1226578321687970406LL;
int zero = 0;
short var_20 = (short)3296;
signed char var_21 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
