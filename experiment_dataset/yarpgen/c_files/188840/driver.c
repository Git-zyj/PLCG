#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)93;
long long int var_5 = 1502539638645649761LL;
unsigned int var_8 = 581347590U;
unsigned short var_9 = (unsigned short)44870;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
signed char var_11 = (signed char)11;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
