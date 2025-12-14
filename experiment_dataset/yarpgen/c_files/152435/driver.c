#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32453;
unsigned char var_4 = (unsigned char)115;
int var_6 = 728966348;
short var_8 = (short)-26973;
unsigned short var_9 = (unsigned short)62411;
int zero = 0;
signed char var_10 = (signed char)-70;
unsigned long long int var_11 = 15682947576117708997ULL;
short var_12 = (short)10735;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
