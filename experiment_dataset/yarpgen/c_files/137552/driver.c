#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
long long int var_1 = 619067243413702940LL;
unsigned long long int var_2 = 17530046045619853076ULL;
unsigned char var_4 = (unsigned char)183;
unsigned int var_7 = 86285214U;
int var_8 = -467388617;
unsigned long long int var_10 = 15272560874116982453ULL;
int zero = 0;
long long int var_11 = 2708821057447038446LL;
unsigned char var_12 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
