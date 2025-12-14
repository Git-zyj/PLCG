#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
_Bool var_2 = (_Bool)0;
int var_3 = 893519362;
long long int var_4 = -7062504125389139477LL;
unsigned char var_6 = (unsigned char)49;
unsigned int var_8 = 2597157418U;
unsigned char var_9 = (unsigned char)25;
int zero = 0;
unsigned char var_10 = (unsigned char)232;
unsigned short var_11 = (unsigned short)2425;
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
