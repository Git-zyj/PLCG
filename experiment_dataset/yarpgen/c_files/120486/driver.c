#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5270;
unsigned char var_3 = (unsigned char)253;
unsigned long long int var_10 = 12406888050342547625ULL;
unsigned short var_13 = (unsigned short)48363;
unsigned short var_16 = (unsigned short)59996;
int zero = 0;
long long int var_20 = 3649733285130578604LL;
short var_21 = (short)-21177;
unsigned short var_22 = (unsigned short)12742;
unsigned short var_23 = (unsigned short)16902;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
