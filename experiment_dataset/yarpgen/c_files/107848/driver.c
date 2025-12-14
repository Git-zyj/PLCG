#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14819;
unsigned short var_2 = (unsigned short)40604;
unsigned short var_3 = (unsigned short)2618;
short var_6 = (short)-24468;
short var_7 = (short)-23158;
long long int var_9 = -2696735892908069232LL;
int zero = 0;
unsigned long long int var_10 = 11683362501235944508ULL;
unsigned char var_11 = (unsigned char)50;
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
