#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned char var_4 = (unsigned char)206;
int var_5 = -212492537;
unsigned char var_8 = (unsigned char)113;
signed char var_9 = (signed char)-57;
short var_10 = (short)-27169;
unsigned int var_13 = 1875857647U;
unsigned char var_14 = (unsigned char)141;
int zero = 0;
int var_16 = 1188769744;
unsigned short var_17 = (unsigned short)2922;
short var_18 = (short)17632;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
