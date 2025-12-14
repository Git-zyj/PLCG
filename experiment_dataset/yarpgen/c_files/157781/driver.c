#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 565222134U;
unsigned short var_1 = (unsigned short)11234;
long long int var_2 = -3324516139495538399LL;
short var_3 = (short)20529;
unsigned long long int var_5 = 9206800347253093496ULL;
unsigned char var_7 = (unsigned char)63;
short var_8 = (short)5569;
int var_9 = -749230378;
short var_10 = (short)21997;
int zero = 0;
signed char var_11 = (signed char)67;
unsigned short var_12 = (unsigned short)9347;
unsigned char var_13 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
