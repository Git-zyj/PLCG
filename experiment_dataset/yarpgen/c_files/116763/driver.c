#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1606661597;
long long int var_2 = -8942457669925836949LL;
unsigned short var_3 = (unsigned short)53912;
long long int var_6 = 2490218366899710010LL;
signed char var_9 = (signed char)-107;
unsigned char var_10 = (unsigned char)23;
unsigned int var_14 = 2246969162U;
int zero = 0;
unsigned char var_15 = (unsigned char)123;
short var_16 = (short)-23453;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
