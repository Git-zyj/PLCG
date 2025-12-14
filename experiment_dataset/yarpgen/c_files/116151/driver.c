#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2437312895617508753LL;
unsigned int var_4 = 514407026U;
long long int var_6 = -304298781916668626LL;
unsigned short var_7 = (unsigned short)52081;
int zero = 0;
long long int var_10 = 467697760240002841LL;
unsigned int var_11 = 1571140156U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
