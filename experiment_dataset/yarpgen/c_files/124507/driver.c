#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 346247651U;
signed char var_6 = (signed char)50;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)54542;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
unsigned long long int var_15 = 18428114443498996909ULL;
unsigned char var_16 = (unsigned char)141;
void init() {
}

void checksum() {
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
