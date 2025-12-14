#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6355097422911797787ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)15102;
long long int var_4 = 6352758552947772865LL;
int var_5 = 1588998027;
short var_6 = (short)-4753;
_Bool var_7 = (_Bool)1;
int var_8 = 1855184173;
unsigned int var_9 = 3675296460U;
long long int var_10 = 2318339866527260042LL;
short var_11 = (short)-17060;
short var_13 = (short)-13625;
unsigned char var_15 = (unsigned char)99;
int zero = 0;
unsigned long long int var_16 = 178998283515263082ULL;
long long int var_17 = -5512688579207542938LL;
void init() {
}

void checksum() {
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
