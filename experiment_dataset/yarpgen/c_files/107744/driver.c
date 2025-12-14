#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
unsigned long long int var_3 = 10197812324650057614ULL;
long long int var_4 = 8121040812290313974LL;
unsigned int var_6 = 4194665059U;
unsigned long long int var_9 = 11944569164459439745ULL;
int zero = 0;
int var_10 = -275707028;
unsigned char var_11 = (unsigned char)239;
signed char var_12 = (signed char)-20;
unsigned int var_13 = 3914733253U;
unsigned short var_14 = (unsigned short)10204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
