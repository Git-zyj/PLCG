#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)19;
unsigned char var_4 = (unsigned char)90;
unsigned int var_5 = 2344615412U;
unsigned short var_6 = (unsigned short)24720;
int var_9 = 1540147872;
unsigned char var_13 = (unsigned char)157;
unsigned char var_14 = (unsigned char)22;
int zero = 0;
unsigned int var_17 = 3965625808U;
int var_18 = 1724641451;
int var_19 = -774943989;
unsigned char var_20 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
