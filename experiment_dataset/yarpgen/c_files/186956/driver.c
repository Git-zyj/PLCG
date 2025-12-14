#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62629;
int var_1 = 1417578301;
unsigned long long int var_2 = 1663969791243342401ULL;
long long int var_3 = -6098399419651537342LL;
unsigned short var_4 = (unsigned short)29958;
signed char var_6 = (signed char)110;
unsigned short var_8 = (unsigned short)9442;
int var_10 = 1956285367;
int zero = 0;
unsigned long long int var_14 = 13625829668705017799ULL;
unsigned short var_15 = (unsigned short)52729;
long long int var_16 = 1531163622396709189LL;
unsigned short var_17 = (unsigned short)44475;
int var_18 = 1061300141;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
