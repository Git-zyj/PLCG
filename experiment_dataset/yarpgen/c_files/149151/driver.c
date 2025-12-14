#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)14;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = -5783274074277954864LL;
unsigned char var_10 = (unsigned char)50;
unsigned char var_12 = (unsigned char)162;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)63573;
int zero = 0;
int var_17 = 2066570637;
unsigned short var_18 = (unsigned short)3811;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9451;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
