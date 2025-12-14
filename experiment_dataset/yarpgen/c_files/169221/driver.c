#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4862032977119558097ULL;
unsigned char var_11 = (unsigned char)184;
unsigned short var_13 = (unsigned short)54358;
unsigned char var_14 = (unsigned char)237;
short var_16 = (short)-21053;
int zero = 0;
unsigned short var_18 = (unsigned short)13286;
long long int var_19 = -2235974458953327145LL;
void init() {
}

void checksum() {
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
