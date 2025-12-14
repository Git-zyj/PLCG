#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)151;
unsigned short var_6 = (unsigned short)62883;
short var_8 = (short)12869;
unsigned char var_9 = (unsigned char)197;
int var_11 = 1631020803;
unsigned int var_13 = 1077099740U;
unsigned long long int var_17 = 1913991371088219369ULL;
int zero = 0;
unsigned long long int var_20 = 2625194718072909748ULL;
unsigned short var_21 = (unsigned short)1167;
long long int var_22 = 8104804699695456625LL;
int var_23 = -943345422;
void init() {
}

void checksum() {
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
