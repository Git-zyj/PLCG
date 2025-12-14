#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned char var_2 = (unsigned char)91;
unsigned char var_3 = (unsigned char)253;
unsigned char var_4 = (unsigned char)37;
unsigned char var_5 = (unsigned char)145;
unsigned char var_6 = (unsigned char)88;
unsigned char var_9 = (unsigned char)101;
unsigned char var_10 = (unsigned char)213;
unsigned char var_11 = (unsigned char)87;
unsigned char var_12 = (unsigned char)90;
int zero = 0;
unsigned char var_13 = (unsigned char)93;
unsigned char var_14 = (unsigned char)10;
unsigned char var_15 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
