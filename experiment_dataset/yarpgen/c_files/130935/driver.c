#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
long long int var_1 = 601523943266000832LL;
signed char var_2 = (signed char)80;
unsigned short var_5 = (unsigned short)30120;
int var_8 = -82965228;
int var_9 = -898750563;
long long int var_10 = 8492017410059648785LL;
unsigned short var_11 = (unsigned short)32229;
unsigned char var_12 = (unsigned char)136;
int zero = 0;
unsigned long long int var_13 = 4659656277343453845ULL;
short var_14 = (short)-27733;
void init() {
}

void checksum() {
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
