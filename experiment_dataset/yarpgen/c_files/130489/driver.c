#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3554204618423900920LL;
long long int var_1 = -6228622292408086933LL;
short var_2 = (short)5640;
unsigned long long int var_3 = 16592283649168841035ULL;
unsigned short var_5 = (unsigned short)50983;
unsigned short var_10 = (unsigned short)10539;
unsigned char var_12 = (unsigned char)0;
int zero = 0;
unsigned long long int var_14 = 5724284239747075140ULL;
unsigned int var_15 = 2395609580U;
int var_16 = -2123953965;
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
