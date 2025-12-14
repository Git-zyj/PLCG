#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 566279069;
unsigned char var_1 = (unsigned char)105;
unsigned char var_2 = (unsigned char)4;
unsigned short var_3 = (unsigned short)37556;
int var_5 = -1121008296;
unsigned char var_6 = (unsigned char)164;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)188;
short var_10 = (short)17440;
int zero = 0;
unsigned int var_11 = 2285276960U;
long long int var_12 = -5607221084767080013LL;
void init() {
}

void checksum() {
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
