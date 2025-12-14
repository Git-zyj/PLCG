#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -179266419;
int var_2 = 1907073852;
unsigned char var_4 = (unsigned char)189;
int var_5 = 802274014;
unsigned char var_7 = (unsigned char)141;
signed char var_10 = (signed char)95;
unsigned long long int var_17 = 7854574789808308797ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)207;
unsigned char var_21 = (unsigned char)188;
short var_22 = (short)-6292;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
