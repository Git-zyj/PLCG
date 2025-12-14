#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)54800;
long long int var_6 = 3316141113105249218LL;
long long int var_7 = 3302723883420934816LL;
unsigned char var_10 = (unsigned char)125;
unsigned int var_12 = 3277719764U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8214839806743063576LL;
short var_16 = (short)-24568;
unsigned short var_17 = (unsigned short)63145;
int var_18 = 267075439;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
