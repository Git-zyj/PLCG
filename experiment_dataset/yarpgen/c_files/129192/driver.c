#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18423775941883940595ULL;
unsigned int var_2 = 2921326817U;
short var_3 = (short)-13129;
unsigned short var_4 = (unsigned short)21862;
short var_7 = (short)-18181;
unsigned long long int var_9 = 424258228303125391ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)117;
int var_11 = 1188345866;
long long int var_12 = -8565373551845851620LL;
unsigned short var_13 = (unsigned short)24;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
