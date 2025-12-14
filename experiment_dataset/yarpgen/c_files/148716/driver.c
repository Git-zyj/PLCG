#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)71;
unsigned char var_5 = (unsigned char)245;
unsigned char var_6 = (unsigned char)204;
unsigned char var_11 = (unsigned char)65;
unsigned char var_12 = (unsigned char)168;
unsigned char var_15 = (unsigned char)15;
int zero = 0;
unsigned char var_19 = (unsigned char)227;
unsigned char var_20 = (unsigned char)163;
unsigned char var_21 = (unsigned char)185;
unsigned char var_22 = (unsigned char)188;
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
