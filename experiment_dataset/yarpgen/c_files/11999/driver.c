#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
int var_3 = -2059733725;
unsigned char var_10 = (unsigned char)163;
unsigned char var_12 = (unsigned char)47;
int zero = 0;
unsigned char var_19 = (unsigned char)63;
int var_20 = -1109721108;
unsigned char var_21 = (unsigned char)12;
unsigned char var_22 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
