#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2272321292U;
int var_6 = 1290555134;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3126050423U;
unsigned short var_12 = (unsigned short)62468;
int var_13 = 223642610;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
