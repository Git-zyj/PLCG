#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31613;
short var_3 = (short)15153;
unsigned short var_4 = (unsigned short)14027;
unsigned char var_8 = (unsigned char)139;
unsigned int var_9 = 3138279753U;
unsigned int var_11 = 2948689074U;
short var_12 = (short)-23368;
int zero = 0;
unsigned int var_14 = 3813011703U;
short var_15 = (short)20457;
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
