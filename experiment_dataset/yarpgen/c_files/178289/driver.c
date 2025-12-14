#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4762840436090972367ULL;
short var_7 = (short)-22913;
unsigned short var_12 = (unsigned short)54703;
short var_13 = (short)-25246;
int zero = 0;
unsigned short var_15 = (unsigned short)22700;
unsigned short var_16 = (unsigned short)15590;
unsigned short var_17 = (unsigned short)13928;
unsigned short var_18 = (unsigned short)13516;
short var_19 = (short)26797;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
