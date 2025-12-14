#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58737;
unsigned char var_3 = (unsigned char)30;
unsigned short var_4 = (unsigned short)58720;
unsigned char var_5 = (unsigned char)255;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1243177358124012223LL;
unsigned char var_8 = (unsigned char)23;
short var_9 = (short)-4527;
unsigned char var_12 = (unsigned char)152;
_Bool var_13 = (_Bool)0;
int var_14 = -1390865458;
unsigned long long int var_15 = 18021091499724844480ULL;
int var_16 = -1066402540;
signed char var_18 = (signed char)-13;
int zero = 0;
unsigned short var_20 = (unsigned short)12506;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-7094;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
