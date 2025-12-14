#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2989504705567346254LL;
short var_4 = (short)148;
long long int var_6 = 934320370997015069LL;
unsigned long long int var_7 = 1894929923282125719ULL;
short var_9 = (short)-26643;
int zero = 0;
unsigned char var_10 = (unsigned char)42;
long long int var_11 = -8542937507296615668LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
