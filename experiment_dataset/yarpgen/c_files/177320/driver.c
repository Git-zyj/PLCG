#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21201;
signed char var_4 = (signed char)32;
long long int var_9 = 6004392246223605646LL;
_Bool var_10 = (_Bool)0;
int var_11 = 43237732;
signed char var_13 = (signed char)84;
int zero = 0;
unsigned char var_15 = (unsigned char)84;
int var_16 = 405366968;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
