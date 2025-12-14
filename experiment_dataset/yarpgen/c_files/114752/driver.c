#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15425;
unsigned char var_3 = (unsigned char)65;
unsigned char var_4 = (unsigned char)217;
int var_5 = -97017056;
unsigned char var_6 = (unsigned char)148;
short var_8 = (short)-12495;
unsigned char var_9 = (unsigned char)83;
short var_11 = (short)13670;
int zero = 0;
short var_14 = (short)-10983;
unsigned char var_15 = (unsigned char)99;
void init() {
}

void checksum() {
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
