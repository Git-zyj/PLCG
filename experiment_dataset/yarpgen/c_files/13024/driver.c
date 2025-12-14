#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8118;
short var_2 = (short)-29275;
int var_5 = -475045330;
unsigned int var_12 = 2196325029U;
int var_13 = 660365877;
int var_14 = -798911576;
unsigned char var_15 = (unsigned char)9;
short var_17 = (short)-26080;
int zero = 0;
unsigned short var_18 = (unsigned short)6018;
unsigned char var_19 = (unsigned char)203;
long long int var_20 = 211033409056542280LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
