#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28891;
int var_5 = -829854077;
unsigned long long int var_6 = 7033536932070884630ULL;
short var_8 = (short)-3815;
short var_11 = (short)-28927;
unsigned int var_12 = 1113323169U;
signed char var_14 = (signed char)122;
int zero = 0;
unsigned char var_15 = (unsigned char)90;
unsigned char var_16 = (unsigned char)150;
unsigned long long int var_17 = 17280675672960117199ULL;
unsigned short var_18 = (unsigned short)15337;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
