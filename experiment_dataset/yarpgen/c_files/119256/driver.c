#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15652421490459464641ULL;
unsigned short var_3 = (unsigned short)58514;
short var_8 = (short)13531;
long long int var_9 = -3577900190786863598LL;
unsigned char var_10 = (unsigned char)134;
int zero = 0;
unsigned short var_12 = (unsigned short)13232;
unsigned short var_13 = (unsigned short)34911;
void init() {
}

void checksum() {
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
