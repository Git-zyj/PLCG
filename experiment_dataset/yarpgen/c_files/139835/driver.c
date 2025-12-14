#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18710;
int var_2 = -1635737286;
short var_3 = (short)-31063;
unsigned long long int var_4 = 6916672890478853554ULL;
unsigned char var_5 = (unsigned char)195;
unsigned short var_7 = (unsigned short)37691;
short var_8 = (short)19041;
unsigned long long int var_9 = 17808098759790889201ULL;
unsigned char var_10 = (unsigned char)28;
short var_11 = (short)891;
unsigned long long int var_12 = 13048450082522251204ULL;
signed char var_13 = (signed char)-127;
int zero = 0;
short var_14 = (short)30189;
unsigned int var_15 = 3166305136U;
long long int var_16 = 1242312100536011848LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
