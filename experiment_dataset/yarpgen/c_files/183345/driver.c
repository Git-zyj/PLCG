#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48312;
unsigned int var_6 = 2276085464U;
unsigned char var_7 = (unsigned char)122;
long long int var_9 = -8741137480182587508LL;
unsigned char var_10 = (unsigned char)236;
short var_11 = (short)-7176;
unsigned char var_13 = (unsigned char)188;
unsigned short var_14 = (unsigned short)40540;
unsigned short var_16 = (unsigned short)49917;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
unsigned int var_19 = 345029113U;
unsigned char var_20 = (unsigned char)121;
void init() {
}

void checksum() {
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
