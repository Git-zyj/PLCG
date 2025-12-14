#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20049;
long long int var_4 = -7482398593886111330LL;
short var_6 = (short)-12953;
unsigned long long int var_7 = 6459932341296667764ULL;
int var_8 = -611454771;
unsigned int var_9 = 3168562643U;
int zero = 0;
unsigned char var_14 = (unsigned char)197;
signed char var_15 = (signed char)100;
unsigned short var_16 = (unsigned short)63701;
signed char var_17 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
