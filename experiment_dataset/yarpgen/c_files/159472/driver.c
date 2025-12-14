#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1809537512;
int var_2 = 160068142;
unsigned int var_3 = 3634037030U;
short var_4 = (short)-19186;
unsigned char var_10 = (unsigned char)90;
int zero = 0;
long long int var_15 = 5246597663713474075LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)2247;
void init() {
}

void checksum() {
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
