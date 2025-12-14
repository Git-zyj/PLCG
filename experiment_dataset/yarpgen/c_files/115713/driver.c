#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47628;
unsigned short var_1 = (unsigned short)59846;
short var_2 = (short)-30176;
signed char var_5 = (signed char)-91;
int var_6 = -884777108;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
unsigned int var_12 = 594658103U;
long long int var_13 = 8757752972159660254LL;
unsigned long long int var_14 = 8507960364900649179ULL;
int var_15 = 594071636;
long long int var_16 = -5787246243379450233LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
