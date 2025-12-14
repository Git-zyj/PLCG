#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 77041623;
_Bool var_2 = (_Bool)1;
long long int var_3 = 5415936605447967155LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)190;
unsigned short var_8 = (unsigned short)29875;
unsigned short var_9 = (unsigned short)10973;
signed char var_10 = (signed char)21;
short var_11 = (short)-24048;
unsigned long long int var_12 = 4806198412710037986ULL;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
int var_14 = -1861584617;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9541422595873324749ULL;
unsigned char var_18 = (unsigned char)43;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
