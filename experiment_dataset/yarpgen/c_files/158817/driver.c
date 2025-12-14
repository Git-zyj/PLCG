#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
signed char var_4 = (signed char)127;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2559512351U;
unsigned char var_10 = (unsigned char)94;
unsigned short var_11 = (unsigned short)43988;
unsigned long long int var_12 = 777067323019677600ULL;
int zero = 0;
short var_16 = (short)23749;
unsigned char var_17 = (unsigned char)6;
unsigned short var_18 = (unsigned short)28839;
void init() {
}

void checksum() {
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
