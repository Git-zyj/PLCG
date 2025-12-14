#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -5393929929747553547LL;
unsigned short var_8 = (unsigned short)3683;
short var_11 = (short)-4017;
unsigned short var_13 = (unsigned short)33495;
unsigned short var_14 = (unsigned short)39663;
int zero = 0;
short var_19 = (short)-28958;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
