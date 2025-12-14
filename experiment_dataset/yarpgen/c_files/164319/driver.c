#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65266;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46720;
short var_5 = (short)11400;
int var_7 = 1184089994;
unsigned short var_9 = (unsigned short)50808;
unsigned char var_10 = (unsigned char)180;
unsigned long long int var_11 = 11324473040619862796ULL;
long long int var_13 = 9006415685201992823LL;
int var_14 = 2097027745;
int zero = 0;
short var_15 = (short)5984;
unsigned short var_16 = (unsigned short)42657;
void init() {
}

void checksum() {
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
