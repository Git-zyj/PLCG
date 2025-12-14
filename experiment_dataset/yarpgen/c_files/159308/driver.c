#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
unsigned long long int var_5 = 11493596384511530244ULL;
unsigned short var_6 = (unsigned short)57787;
int var_8 = 2023498340;
int var_9 = 1312313262;
int var_10 = -239156565;
unsigned char var_11 = (unsigned char)58;
unsigned char var_12 = (unsigned char)186;
unsigned int var_13 = 3659267638U;
int zero = 0;
unsigned char var_16 = (unsigned char)24;
unsigned int var_17 = 1168748738U;
unsigned char var_18 = (unsigned char)146;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-32763;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
