#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3389773481193736476ULL;
short var_5 = (short)29048;
unsigned char var_10 = (unsigned char)240;
unsigned char var_11 = (unsigned char)136;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
unsigned long long int var_15 = 1098020033759751134ULL;
unsigned char var_16 = (unsigned char)12;
unsigned int var_17 = 2678788238U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
