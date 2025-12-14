#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)218;
unsigned short var_15 = (unsigned short)10433;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4076259192U;
int zero = 0;
long long int var_19 = -7181177950591795424LL;
long long int var_20 = -365186830959624537LL;
long long int var_21 = 5124298462170654143LL;
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
