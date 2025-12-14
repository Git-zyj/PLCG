#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54242;
unsigned char var_2 = (unsigned char)201;
signed char var_3 = (signed char)-94;
unsigned long long int var_5 = 17885287281394481506ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
int var_11 = 1901184420;
int var_12 = -741987759;
short var_13 = (short)-19639;
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
