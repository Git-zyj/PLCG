#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 67743315;
unsigned short var_4 = (unsigned short)38708;
unsigned int var_5 = 4076264537U;
int var_10 = -1933901718;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
unsigned int var_12 = 1238937909U;
int var_13 = -1157690658;
int var_14 = 1247886889;
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
