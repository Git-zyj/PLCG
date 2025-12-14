#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34606;
unsigned char var_3 = (unsigned char)71;
unsigned long long int var_5 = 11028099033197502688ULL;
long long int var_10 = -8637839445057040054LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)66;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-28871;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
