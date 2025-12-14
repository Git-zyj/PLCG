#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16680;
int var_1 = -2031323209;
short var_5 = (short)-23326;
int var_7 = -1232817174;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
unsigned char var_19 = (unsigned char)80;
unsigned char var_20 = (unsigned char)50;
short var_21 = (short)1370;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
