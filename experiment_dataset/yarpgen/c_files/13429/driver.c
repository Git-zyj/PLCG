#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20883;
int var_4 = -1468590456;
signed char var_5 = (signed char)106;
int var_7 = 737445573;
int var_8 = -1850527418;
short var_10 = (short)-12213;
unsigned short var_11 = (unsigned short)53219;
long long int var_13 = -4317044472117909208LL;
unsigned short var_14 = (unsigned short)18899;
int zero = 0;
long long int var_15 = -3404408507155229609LL;
long long int var_16 = 5058015226396161437LL;
short var_17 = (short)9367;
int var_18 = -423262283;
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
