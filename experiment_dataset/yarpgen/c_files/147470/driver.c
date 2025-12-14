#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4457;
short var_2 = (short)-18180;
signed char var_7 = (signed char)72;
short var_9 = (short)-32569;
unsigned short var_10 = (unsigned short)16210;
unsigned long long int var_11 = 3235148562961501118ULL;
unsigned long long int var_12 = 5399894672998590448ULL;
unsigned long long int var_16 = 7227277103230418187ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)209;
int var_18 = -1008640367;
unsigned int var_19 = 3347858628U;
short var_20 = (short)-6271;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
