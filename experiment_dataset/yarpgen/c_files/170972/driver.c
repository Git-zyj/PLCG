#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1909783523835132939LL;
unsigned short var_4 = (unsigned short)47661;
unsigned int var_9 = 1713202233U;
unsigned short var_10 = (unsigned short)63206;
unsigned char var_11 = (unsigned char)42;
unsigned char var_13 = (unsigned char)95;
unsigned short var_14 = (unsigned short)19255;
int var_15 = 417980765;
int zero = 0;
short var_16 = (short)9169;
unsigned long long int var_17 = 4281453291893590183ULL;
int var_18 = 1634545945;
int var_19 = 1075158074;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
