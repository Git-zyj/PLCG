#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1750937650U;
int var_4 = 987935785;
long long int var_5 = 6286120902762515250LL;
int var_8 = 1499955265;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)164;
int zero = 0;
long long int var_14 = -3107459293300880347LL;
unsigned char var_15 = (unsigned char)13;
signed char var_16 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
