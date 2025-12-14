#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3642;
unsigned char var_5 = (unsigned char)61;
unsigned short var_6 = (unsigned short)7589;
int var_7 = -1831960688;
unsigned short var_8 = (unsigned short)53256;
unsigned char var_9 = (unsigned char)118;
unsigned short var_10 = (unsigned short)59415;
unsigned short var_13 = (unsigned short)16341;
short var_14 = (short)7235;
int zero = 0;
int var_15 = -396283274;
short var_16 = (short)8755;
int var_17 = -1870194675;
int var_18 = 362512470;
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
