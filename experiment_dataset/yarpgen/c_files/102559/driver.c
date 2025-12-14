#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18420;
unsigned int var_2 = 890716186U;
unsigned char var_3 = (unsigned char)172;
short var_6 = (short)31781;
unsigned int var_7 = 4209550376U;
unsigned long long int var_10 = 215929356725062436ULL;
unsigned char var_16 = (unsigned char)185;
unsigned short var_17 = (unsigned short)50039;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
int var_20 = 242347625;
void init() {
}

void checksum() {
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
