#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 6567134778631986938ULL;
int var_4 = 1638583617;
unsigned char var_6 = (unsigned char)189;
unsigned short var_7 = (unsigned short)35728;
long long int var_8 = 2206654973521890961LL;
unsigned long long int var_11 = 16100041585585582687ULL;
unsigned short var_12 = (unsigned short)8136;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 792528497;
unsigned short var_15 = (unsigned short)28390;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
