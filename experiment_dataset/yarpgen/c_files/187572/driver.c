#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -5366884665024547896LL;
short var_3 = (short)7299;
long long int var_6 = -5920657300244527518LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)49621;
unsigned char var_11 = (unsigned char)193;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 2428996722348110020ULL;
int var_20 = 802792421;
long long int var_21 = -9123392017060908186LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
