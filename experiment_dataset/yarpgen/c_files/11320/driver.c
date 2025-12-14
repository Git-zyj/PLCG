#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57943;
unsigned short var_3 = (unsigned short)32034;
_Bool var_4 = (_Bool)1;
int var_6 = 266905118;
unsigned long long int var_7 = 6295388148225183299ULL;
unsigned char var_8 = (unsigned char)16;
unsigned short var_9 = (unsigned short)62684;
unsigned long long int var_10 = 15364487291643686983ULL;
short var_12 = (short)28222;
short var_13 = (short)23492;
int zero = 0;
unsigned long long int var_15 = 5476773104876484574ULL;
int var_16 = -2100041331;
unsigned short var_17 = (unsigned short)62941;
int var_18 = 612828028;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
