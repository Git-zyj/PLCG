#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15219822233998824123ULL;
int var_1 = 2042379778;
unsigned short var_4 = (unsigned short)60439;
unsigned int var_5 = 2542513032U;
unsigned char var_10 = (unsigned char)64;
unsigned short var_11 = (unsigned short)34418;
unsigned char var_15 = (unsigned char)233;
signed char var_16 = (signed char)1;
short var_17 = (short)26053;
int zero = 0;
unsigned long long int var_19 = 13021947309468961063ULL;
unsigned short var_20 = (unsigned short)46257;
unsigned long long int var_21 = 16435878188252199842ULL;
unsigned char var_22 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
