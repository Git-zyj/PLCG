#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26596;
unsigned char var_2 = (unsigned char)70;
unsigned short var_4 = (unsigned short)18687;
int var_6 = -2140538812;
unsigned short var_7 = (unsigned short)34955;
int var_9 = 1072439918;
int zero = 0;
short var_10 = (short)-24113;
unsigned short var_11 = (unsigned short)40985;
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
