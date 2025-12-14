#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15291991617051863904ULL;
unsigned short var_1 = (unsigned short)39554;
signed char var_2 = (signed char)-92;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11800105500662364113ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2040881352U;
int var_8 = 303130525;
unsigned short var_9 = (unsigned short)5200;
unsigned int var_11 = 3163720546U;
_Bool var_12 = (_Bool)1;
int var_13 = -973049138;
short var_14 = (short)21749;
int zero = 0;
unsigned long long int var_15 = 768168117762519113ULL;
short var_16 = (short)-9375;
unsigned char var_17 = (unsigned char)76;
void init() {
}

void checksum() {
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
