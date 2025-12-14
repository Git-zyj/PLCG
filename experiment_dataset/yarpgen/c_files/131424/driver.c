#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1374038281;
unsigned short var_7 = (unsigned short)30682;
signed char var_9 = (signed char)115;
long long int var_10 = 9000121698453360624LL;
int var_11 = -245150043;
unsigned long long int var_12 = 2590228798704599516ULL;
int zero = 0;
short var_20 = (short)6741;
int var_21 = -1471775259;
int var_22 = 528456799;
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
