#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
short var_3 = (short)-27441;
signed char var_5 = (signed char)-48;
unsigned short var_6 = (unsigned short)58808;
unsigned short var_8 = (unsigned short)1163;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
long long int var_15 = 6196760216728822187LL;
short var_16 = (short)32059;
short var_17 = (short)-21651;
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
