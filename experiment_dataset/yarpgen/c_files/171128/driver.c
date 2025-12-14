#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3417000008U;
short var_2 = (short)-138;
long long int var_4 = 2460392908778527741LL;
unsigned short var_8 = (unsigned short)62526;
unsigned int var_9 = 1367143772U;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
short var_12 = (short)1565;
int var_13 = -1993805000;
long long int var_14 = -1162213897978122422LL;
void init() {
}

void checksum() {
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
