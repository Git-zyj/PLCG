#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40500;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)43845;
unsigned char var_6 = (unsigned char)155;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 7120978442575917760ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)64051;
signed char var_12 = (signed char)72;
int var_13 = 1420355748;
unsigned short var_14 = (unsigned short)40419;
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
