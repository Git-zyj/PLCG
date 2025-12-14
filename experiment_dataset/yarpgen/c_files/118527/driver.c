#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3474258356U;
short var_5 = (short)-31943;
unsigned int var_8 = 1086975464U;
unsigned int var_10 = 2931584718U;
long long int var_11 = -5117130832940445980LL;
int zero = 0;
unsigned char var_13 = (unsigned char)158;
unsigned int var_14 = 1064019744U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
