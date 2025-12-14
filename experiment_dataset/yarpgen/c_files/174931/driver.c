#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)46;
unsigned short var_9 = (unsigned short)19555;
long long int var_10 = -6168596325250310428LL;
unsigned int var_11 = 116645976U;
long long int var_13 = 4367550687131845691LL;
unsigned char var_15 = (unsigned char)240;
int zero = 0;
int var_17 = 165323503;
unsigned char var_18 = (unsigned char)50;
void init() {
}

void checksum() {
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
