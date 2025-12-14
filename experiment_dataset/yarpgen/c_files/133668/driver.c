#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4062443800U;
int var_1 = -718807291;
unsigned short var_2 = (unsigned short)60833;
unsigned long long int var_10 = 7038205322197451384ULL;
int var_13 = -1854402358;
short var_15 = (short)14922;
unsigned char var_19 = (unsigned char)131;
int zero = 0;
unsigned short var_20 = (unsigned short)46303;
unsigned short var_21 = (unsigned short)54291;
void init() {
}

void checksum() {
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
