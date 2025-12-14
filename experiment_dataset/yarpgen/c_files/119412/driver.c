#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31100;
long long int var_1 = -1295610501308079355LL;
signed char var_2 = (signed char)98;
long long int var_5 = 226363403955698805LL;
unsigned short var_6 = (unsigned short)36739;
unsigned short var_7 = (unsigned short)64063;
signed char var_8 = (signed char)-36;
short var_9 = (short)-18302;
int var_12 = 1971172068;
int zero = 0;
long long int var_13 = 3060537771855572004LL;
unsigned char var_14 = (unsigned char)131;
unsigned int var_15 = 3298835713U;
short var_16 = (short)-30945;
unsigned short var_17 = (unsigned short)18316;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
