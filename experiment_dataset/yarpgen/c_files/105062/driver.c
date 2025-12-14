#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)26810;
unsigned char var_3 = (unsigned char)70;
long long int var_6 = -3463449956335834971LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13448703857135826886ULL;
int zero = 0;
int var_15 = -2081854371;
int var_16 = 1232518659;
unsigned short var_17 = (unsigned short)62127;
unsigned long long int var_18 = 5781493446218805321ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
