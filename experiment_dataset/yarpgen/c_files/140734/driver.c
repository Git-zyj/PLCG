#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25094;
unsigned short var_2 = (unsigned short)231;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3804787355U;
unsigned char var_11 = (unsigned char)121;
unsigned short var_13 = (unsigned short)31015;
int zero = 0;
unsigned short var_14 = (unsigned short)62255;
unsigned int var_15 = 912493065U;
short var_16 = (short)-5270;
unsigned short var_17 = (unsigned short)52478;
void init() {
}

void checksum() {
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
