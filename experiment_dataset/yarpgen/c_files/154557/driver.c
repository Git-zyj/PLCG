#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4100726464U;
int var_2 = 733114181;
int var_3 = 1254426125;
long long int var_5 = 3162744126062338164LL;
unsigned int var_7 = 4252331520U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)17739;
int var_12 = 118126098;
unsigned long long int var_13 = 13125641674932504133ULL;
short var_14 = (short)-10807;
short var_17 = (short)-30613;
short var_19 = (short)-15283;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)119;
unsigned int var_22 = 2601304832U;
int var_23 = -966638049;
unsigned short var_24 = (unsigned short)11878;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
