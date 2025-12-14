#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2220436408588715218LL;
short var_3 = (short)6894;
unsigned char var_12 = (unsigned char)166;
short var_14 = (short)-27712;
unsigned char var_18 = (unsigned char)228;
int zero = 0;
unsigned short var_19 = (unsigned short)51275;
unsigned long long int var_20 = 2960621915899708426ULL;
short var_21 = (short)28144;
unsigned long long int var_22 = 14087723291079172906ULL;
short var_23 = (short)-26961;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
