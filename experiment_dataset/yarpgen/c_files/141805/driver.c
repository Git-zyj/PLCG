#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13946;
long long int var_1 = -782106877117975161LL;
unsigned char var_3 = (unsigned char)50;
long long int var_5 = 6641352501565713337LL;
unsigned long long int var_7 = 3406000265099450340ULL;
unsigned short var_8 = (unsigned short)18450;
short var_9 = (short)-28026;
short var_10 = (short)17673;
short var_11 = (short)11280;
int var_12 = 17814526;
unsigned char var_13 = (unsigned char)247;
int zero = 0;
signed char var_14 = (signed char)75;
short var_15 = (short)-26605;
unsigned short var_16 = (unsigned short)49014;
void init() {
}

void checksum() {
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
