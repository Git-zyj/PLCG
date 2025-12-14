#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6662;
unsigned char var_3 = (unsigned char)178;
unsigned short var_5 = (unsigned short)17753;
long long int var_6 = -53277718507926222LL;
long long int var_8 = 5382979259031644003LL;
unsigned long long int var_10 = 5305612481268964241ULL;
unsigned short var_13 = (unsigned short)52080;
unsigned long long int var_14 = 3954020546535868902ULL;
unsigned int var_15 = 1984708624U;
int zero = 0;
short var_16 = (short)21193;
short var_17 = (short)11378;
void init() {
}

void checksum() {
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
