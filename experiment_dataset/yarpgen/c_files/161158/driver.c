#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6065;
int var_9 = 1441819054;
long long int var_16 = -1929519007998831334LL;
int zero = 0;
unsigned short var_19 = (unsigned short)62288;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8740072262879516474LL;
short var_22 = (short)10415;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
