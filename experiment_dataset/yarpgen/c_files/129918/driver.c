#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36884;
unsigned char var_1 = (unsigned char)215;
unsigned short var_3 = (unsigned short)30136;
long long int var_8 = -3057763676663520435LL;
long long int var_9 = 1473908672365526733LL;
int var_11 = -167017745;
unsigned char var_12 = (unsigned char)152;
unsigned char var_17 = (unsigned char)102;
int zero = 0;
unsigned long long int var_18 = 14227848189005195700ULL;
unsigned short var_19 = (unsigned short)26497;
unsigned char var_20 = (unsigned char)184;
unsigned short var_21 = (unsigned short)6278;
short var_22 = (short)-613;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
