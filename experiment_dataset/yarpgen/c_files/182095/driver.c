#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26812;
short var_3 = (short)-9510;
short var_5 = (short)13931;
unsigned short var_6 = (unsigned short)37530;
long long int var_11 = -2865136493952771603LL;
int zero = 0;
unsigned char var_12 = (unsigned char)247;
short var_13 = (short)13239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
