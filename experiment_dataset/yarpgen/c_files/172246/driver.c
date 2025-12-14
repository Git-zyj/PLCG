#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1706754426U;
unsigned char var_2 = (unsigned char)65;
unsigned int var_4 = 1031233680U;
unsigned char var_6 = (unsigned char)57;
int var_7 = 778575317;
long long int var_8 = 2362471652133469834LL;
unsigned int var_10 = 2109441003U;
unsigned char var_11 = (unsigned char)180;
unsigned short var_12 = (unsigned short)17326;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
