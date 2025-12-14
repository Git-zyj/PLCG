#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
short var_2 = (short)-23987;
unsigned int var_5 = 1418438608U;
short var_8 = (short)5276;
unsigned long long int var_9 = 7611585343337681511ULL;
int zero = 0;
int var_12 = 1800713929;
unsigned short var_13 = (unsigned short)57717;
unsigned long long int var_14 = 923790704652692146ULL;
unsigned long long int var_15 = 4077361421992353174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
