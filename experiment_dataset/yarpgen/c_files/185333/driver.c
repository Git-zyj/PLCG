#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned short var_1 = (unsigned short)50094;
unsigned char var_2 = (unsigned char)180;
unsigned short var_4 = (unsigned short)61176;
long long int var_5 = 6465577871159216543LL;
unsigned short var_7 = (unsigned short)3718;
unsigned short var_9 = (unsigned short)57190;
int zero = 0;
unsigned int var_10 = 776994356U;
short var_11 = (short)12597;
unsigned char var_12 = (unsigned char)100;
unsigned int var_13 = 1820460800U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
