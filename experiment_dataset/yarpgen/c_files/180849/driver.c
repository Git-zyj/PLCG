#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned char var_1 = (unsigned char)141;
unsigned char var_2 = (unsigned char)37;
unsigned char var_4 = (unsigned char)155;
unsigned char var_5 = (unsigned char)246;
unsigned char var_6 = (unsigned char)81;
unsigned char var_8 = (unsigned char)43;
unsigned char var_11 = (unsigned char)49;
unsigned char var_13 = (unsigned char)103;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
unsigned char var_15 = (unsigned char)255;
unsigned char var_16 = (unsigned char)209;
unsigned char var_17 = (unsigned char)25;
unsigned char var_18 = (unsigned char)47;
unsigned char var_19 = (unsigned char)213;
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
