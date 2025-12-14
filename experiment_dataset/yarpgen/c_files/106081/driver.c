#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)20029;
short var_7 = (short)-32321;
int var_9 = 1999975129;
short var_11 = (short)-4529;
int zero = 0;
int var_13 = 334866587;
int var_14 = -543306255;
unsigned long long int var_15 = 17407220324207643581ULL;
unsigned short var_16 = (unsigned short)62059;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
