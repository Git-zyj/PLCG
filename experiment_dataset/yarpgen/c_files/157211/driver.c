#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
unsigned char var_4 = (unsigned char)177;
unsigned char var_7 = (unsigned char)35;
unsigned char var_9 = (unsigned char)9;
unsigned char var_11 = (unsigned char)90;
unsigned char var_13 = (unsigned char)129;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)235;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
unsigned char var_19 = (unsigned char)4;
unsigned char var_20 = (unsigned char)196;
unsigned char var_21 = (unsigned char)45;
unsigned char var_22 = (unsigned char)80;
unsigned char var_23 = (unsigned char)65;
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
