#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5850109568891392606LL;
unsigned int var_1 = 3907112530U;
unsigned long long int var_2 = 12559393722545796971ULL;
unsigned char var_3 = (unsigned char)127;
long long int var_4 = 8364215767920453460LL;
unsigned int var_5 = 1390349666U;
int var_6 = 1044110114;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)152;
int var_9 = 2120826837;
int zero = 0;
unsigned short var_10 = (unsigned short)40355;
long long int var_11 = -5994013708627400467LL;
unsigned long long int var_12 = 10669368873287633907ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
