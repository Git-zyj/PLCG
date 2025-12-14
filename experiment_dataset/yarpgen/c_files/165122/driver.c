#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6050624496219669285LL;
signed char var_4 = (signed char)-124;
short var_9 = (short)24157;
unsigned char var_12 = (unsigned char)81;
int zero = 0;
unsigned char var_20 = (unsigned char)225;
short var_21 = (short)437;
unsigned char var_22 = (unsigned char)5;
void init() {
}

void checksum() {
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
