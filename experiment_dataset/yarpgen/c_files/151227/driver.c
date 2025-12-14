#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65456;
unsigned char var_3 = (unsigned char)68;
int var_8 = -936491848;
_Bool var_9 = (_Bool)0;
unsigned int var_15 = 1886668594U;
int zero = 0;
int var_16 = 353704488;
signed char var_17 = (signed char)125;
int var_18 = -1951875500;
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
