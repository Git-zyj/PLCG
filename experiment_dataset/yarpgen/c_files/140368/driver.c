#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16111290818813211176ULL;
unsigned long long int var_2 = 15396519582532039669ULL;
unsigned char var_5 = (unsigned char)2;
unsigned short var_7 = (unsigned short)10667;
unsigned short var_9 = (unsigned short)33593;
int zero = 0;
unsigned char var_12 = (unsigned char)240;
short var_13 = (short)28180;
unsigned short var_14 = (unsigned short)1260;
unsigned long long int var_15 = 17929424548131464894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
