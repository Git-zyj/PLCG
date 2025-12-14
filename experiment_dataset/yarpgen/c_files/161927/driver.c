#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
unsigned short var_2 = (unsigned short)1919;
unsigned long long int var_3 = 14444314165572800997ULL;
unsigned long long int var_4 = 10589817977249520601ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13905682086639227807ULL;
unsigned char var_7 = (unsigned char)34;
unsigned short var_13 = (unsigned short)20256;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)46087;
short var_16 = (short)-24989;
int zero = 0;
unsigned char var_20 = (unsigned char)48;
int var_21 = 582557135;
long long int var_22 = 878253475756109558LL;
int var_23 = 1025074616;
signed char var_24 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
