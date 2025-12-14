#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12460;
long long int var_3 = 7872136710988560919LL;
unsigned char var_4 = (unsigned char)249;
unsigned char var_5 = (unsigned char)172;
unsigned char var_6 = (unsigned char)88;
unsigned short var_7 = (unsigned short)12492;
unsigned short var_8 = (unsigned short)5240;
unsigned char var_9 = (unsigned char)19;
unsigned char var_12 = (unsigned char)74;
unsigned short var_13 = (unsigned short)54787;
int zero = 0;
unsigned short var_14 = (unsigned short)55318;
unsigned char var_15 = (unsigned char)11;
unsigned char var_16 = (unsigned char)242;
unsigned char var_17 = (unsigned char)132;
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
