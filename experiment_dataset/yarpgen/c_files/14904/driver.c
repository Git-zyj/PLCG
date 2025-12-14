#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21430;
long long int var_4 = -3756484803564504621LL;
unsigned short var_6 = (unsigned short)7652;
unsigned short var_10 = (unsigned short)30013;
int zero = 0;
short var_13 = (short)10112;
int var_14 = -1350217957;
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
