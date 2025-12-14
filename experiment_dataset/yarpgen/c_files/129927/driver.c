#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65401;
int var_1 = -599771250;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)201;
unsigned short var_8 = (unsigned short)5167;
unsigned char var_9 = (unsigned char)233;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)113;
unsigned char var_14 = (unsigned char)224;
unsigned short var_15 = (unsigned short)60450;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
