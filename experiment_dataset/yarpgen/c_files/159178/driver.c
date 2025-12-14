#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32013;
short var_2 = (short)16836;
unsigned int var_5 = 1043834615U;
unsigned char var_6 = (unsigned char)73;
unsigned char var_9 = (unsigned char)82;
int zero = 0;
long long int var_18 = 205287834323984785LL;
short var_19 = (short)3990;
signed char var_20 = (signed char)125;
unsigned int var_21 = 459074501U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
