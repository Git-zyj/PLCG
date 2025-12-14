#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38070;
unsigned char var_2 = (unsigned char)191;
short var_3 = (short)4619;
unsigned char var_7 = (unsigned char)62;
short var_9 = (short)-26934;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
unsigned int var_13 = 525902162U;
unsigned char var_14 = (unsigned char)57;
void init() {
}

void checksum() {
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
