#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)95;
long long int var_5 = 349576341107329196LL;
long long int var_8 = 6445032058386080351LL;
short var_10 = (short)-974;
int var_13 = -257405263;
int var_14 = 1932063243;
unsigned short var_17 = (unsigned short)16111;
int zero = 0;
unsigned char var_20 = (unsigned char)119;
short var_21 = (short)31759;
unsigned short var_22 = (unsigned short)43258;
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
