#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
unsigned char var_3 = (unsigned char)173;
unsigned char var_4 = (unsigned char)104;
unsigned char var_10 = (unsigned char)130;
unsigned char var_11 = (unsigned char)53;
unsigned char var_12 = (unsigned char)54;
unsigned char var_13 = (unsigned char)145;
unsigned char var_14 = (unsigned char)184;
unsigned char var_15 = (unsigned char)110;
unsigned char var_16 = (unsigned char)220;
unsigned char var_18 = (unsigned char)189;
int zero = 0;
unsigned char var_19 = (unsigned char)193;
unsigned char var_20 = (unsigned char)58;
unsigned char var_21 = (unsigned char)133;
unsigned char var_22 = (unsigned char)220;
unsigned char var_23 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
