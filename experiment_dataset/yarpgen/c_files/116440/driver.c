#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1892456061;
short var_1 = (short)24018;
short var_2 = (short)-27230;
unsigned short var_3 = (unsigned short)16807;
signed char var_4 = (signed char)68;
unsigned short var_5 = (unsigned short)18439;
unsigned char var_6 = (unsigned char)52;
signed char var_7 = (signed char)59;
int var_8 = 1087390094;
int var_9 = -1237100441;
unsigned char var_10 = (unsigned char)105;
unsigned char var_11 = (unsigned char)35;
long long int var_12 = -8235357626354481154LL;
int zero = 0;
signed char var_13 = (signed char)116;
short var_14 = (short)10248;
short var_15 = (short)1249;
int var_16 = -700447642;
int var_17 = 488593573;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
