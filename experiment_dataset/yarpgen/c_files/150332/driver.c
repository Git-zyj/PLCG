#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5565455827053365976ULL;
unsigned char var_7 = (unsigned char)138;
short var_12 = (short)-30972;
unsigned short var_14 = (unsigned short)10251;
int zero = 0;
int var_15 = -1284971927;
unsigned char var_16 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
