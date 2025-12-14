#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26959;
_Bool var_3 = (_Bool)0;
short var_7 = (short)19709;
long long int var_8 = -8209826214539140624LL;
int var_9 = 1528183449;
int var_10 = -147236190;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1488948200;
unsigned char var_17 = (unsigned char)78;
_Bool var_18 = (_Bool)1;
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
