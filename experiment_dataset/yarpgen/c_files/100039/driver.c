#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2109706752;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)66;
long long int var_6 = -8822538912336731726LL;
unsigned short var_9 = (unsigned short)47304;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7441487711523621922ULL;
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
