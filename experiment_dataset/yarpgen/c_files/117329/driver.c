#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18684;
unsigned short var_1 = (unsigned short)26426;
unsigned char var_6 = (unsigned char)134;
unsigned int var_7 = 347517769U;
unsigned long long int var_12 = 15108405539514437191ULL;
unsigned long long int var_13 = 15467687124608803592ULL;
int var_15 = -617736091;
unsigned short var_17 = (unsigned short)59367;
int zero = 0;
short var_20 = (short)-10225;
unsigned short var_21 = (unsigned short)43570;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
