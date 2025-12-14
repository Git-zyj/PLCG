#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5549414776017512708LL;
_Bool var_1 = (_Bool)0;
long long int var_3 = 7453215815667139122LL;
long long int var_5 = 1427787810429678283LL;
unsigned short var_6 = (unsigned short)52875;
unsigned int var_7 = 3529948507U;
unsigned short var_9 = (unsigned short)12499;
unsigned char var_13 = (unsigned char)242;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 3340799757081991680LL;
short var_16 = (short)-3070;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10547295055053464510ULL;
unsigned char var_19 = (unsigned char)48;
void init() {
}

void checksum() {
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
