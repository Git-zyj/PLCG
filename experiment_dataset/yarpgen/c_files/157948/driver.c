#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 128080359U;
long long int var_4 = 6779104730865970544LL;
long long int var_7 = -5958695296730405675LL;
unsigned char var_8 = (unsigned char)205;
signed char var_10 = (signed char)-21;
int zero = 0;
long long int var_12 = 6161340833491904403LL;
signed char var_13 = (signed char)-123;
unsigned long long int var_14 = 14525562208184326519ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
