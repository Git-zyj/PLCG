#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2156676085U;
short var_8 = (short)19630;
short var_9 = (short)-17522;
unsigned char var_12 = (unsigned char)107;
short var_13 = (short)-6397;
int var_16 = -407295655;
int zero = 0;
unsigned char var_17 = (unsigned char)39;
unsigned int var_18 = 309203961U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
