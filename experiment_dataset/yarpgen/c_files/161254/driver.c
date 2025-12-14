#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-26807;
unsigned long long int var_8 = 16397739539197383022ULL;
unsigned long long int var_9 = 4035019816266027639ULL;
unsigned char var_10 = (unsigned char)111;
int zero = 0;
unsigned char var_12 = (unsigned char)206;
int var_13 = -2076027923;
unsigned char var_14 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
