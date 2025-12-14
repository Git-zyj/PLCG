#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8850489658321718621ULL;
unsigned char var_3 = (unsigned char)48;
_Bool var_4 = (_Bool)0;
long long int var_6 = -1751879896392281907LL;
unsigned char var_7 = (unsigned char)24;
unsigned short var_9 = (unsigned short)65446;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
unsigned short var_11 = (unsigned short)26120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
