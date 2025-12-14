#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)228;
_Bool var_2 = (_Bool)0;
int var_3 = -1272789126;
int var_5 = 1887552149;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)12268;
unsigned char var_9 = (unsigned char)51;
unsigned char var_10 = (unsigned char)51;
int zero = 0;
unsigned short var_11 = (unsigned short)51786;
unsigned long long int var_12 = 6597247443431239227ULL;
int var_13 = -347295142;
int var_14 = -1347741860;
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
