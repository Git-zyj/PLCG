#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6029;
signed char var_2 = (signed char)-81;
int var_3 = -246004377;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)65;
short var_10 = (short)-30902;
int zero = 0;
unsigned short var_11 = (unsigned short)39497;
long long int var_12 = -4277923799852586517LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
