#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13589606231340845743ULL;
unsigned char var_1 = (unsigned char)71;
signed char var_2 = (signed char)-122;
unsigned char var_3 = (unsigned char)39;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)157;
unsigned short var_6 = (unsigned short)12966;
unsigned char var_7 = (unsigned char)50;
short var_9 = (short)32414;
int zero = 0;
unsigned short var_10 = (unsigned short)2614;
short var_11 = (short)21641;
int var_12 = 1714566994;
unsigned char var_13 = (unsigned char)137;
int var_14 = -1410417044;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
