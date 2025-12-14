#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
long long int var_2 = -3073123690157940240LL;
unsigned short var_4 = (unsigned short)31160;
unsigned char var_5 = (unsigned char)206;
short var_7 = (short)-16666;
signed char var_8 = (signed char)119;
int var_9 = 1701602294;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)17596;
unsigned short var_13 = (unsigned short)54508;
short var_14 = (short)-14730;
void init() {
}

void checksum() {
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
