#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
long long int var_2 = -1227483647046499022LL;
signed char var_4 = (signed char)2;
unsigned char var_6 = (unsigned char)140;
signed char var_7 = (signed char)100;
signed char var_9 = (signed char)-40;
int zero = 0;
unsigned int var_10 = 3152116718U;
unsigned int var_11 = 2391606538U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
