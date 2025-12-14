#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 397467260516602508LL;
int var_3 = 685151880;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_7 = 1744738294;
unsigned char var_8 = (unsigned char)154;
long long int var_11 = -7728916339923622352LL;
unsigned char var_16 = (unsigned char)186;
int zero = 0;
unsigned short var_20 = (unsigned short)29818;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)46573;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
