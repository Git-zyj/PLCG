#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7346639273789999554LL;
unsigned short var_4 = (unsigned short)60020;
unsigned short var_10 = (unsigned short)33072;
long long int var_11 = -2515069090165791041LL;
unsigned char var_18 = (unsigned char)25;
int zero = 0;
long long int var_19 = -3261649906618750844LL;
unsigned char var_20 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
