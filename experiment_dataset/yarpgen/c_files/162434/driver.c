#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2516270435U;
unsigned short var_2 = (unsigned short)14101;
signed char var_3 = (signed char)-16;
unsigned int var_5 = 2794756001U;
signed char var_6 = (signed char)-43;
unsigned char var_7 = (unsigned char)48;
long long int var_9 = 7792348916562063509LL;
int zero = 0;
long long int var_11 = 1279937389588835844LL;
long long int var_12 = 1174677869688766950LL;
int var_13 = -1801028810;
unsigned char var_14 = (unsigned char)200;
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
