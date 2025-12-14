#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
unsigned char var_2 = (unsigned char)9;
unsigned long long int var_3 = 979428865569825611ULL;
unsigned char var_4 = (unsigned char)93;
unsigned int var_6 = 684452489U;
int zero = 0;
unsigned char var_10 = (unsigned char)144;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)11083;
unsigned short var_13 = (unsigned short)55728;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
