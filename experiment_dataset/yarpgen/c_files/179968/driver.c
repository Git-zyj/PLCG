#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46062;
long long int var_5 = 753023253072707336LL;
unsigned int var_6 = 1355182431U;
unsigned short var_10 = (unsigned short)33436;
short var_15 = (short)4435;
int var_18 = -1934759363;
int zero = 0;
unsigned char var_19 = (unsigned char)46;
int var_20 = 879578014;
unsigned char var_21 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
