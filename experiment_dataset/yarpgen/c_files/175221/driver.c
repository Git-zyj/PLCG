#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4980598384221582463LL;
unsigned int var_3 = 3205842566U;
short var_4 = (short)-25333;
int var_5 = -1939270080;
unsigned long long int var_6 = 7022101978505489752ULL;
unsigned short var_8 = (unsigned short)52474;
unsigned short var_9 = (unsigned short)49433;
int zero = 0;
unsigned short var_10 = (unsigned short)65090;
unsigned int var_11 = 2688117719U;
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
