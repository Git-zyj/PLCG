#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8957;
int var_2 = -1609821818;
int var_3 = 988026516;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1087241591U;
short var_7 = (short)-5476;
unsigned int var_15 = 4016114713U;
unsigned short var_19 = (unsigned short)33988;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
int var_21 = 1079138719;
unsigned char var_22 = (unsigned char)18;
unsigned int var_23 = 1220708902U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
