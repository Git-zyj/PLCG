#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2122291772;
unsigned int var_1 = 3635997071U;
_Bool var_2 = (_Bool)1;
int var_5 = 174263138;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)62757;
int zero = 0;
signed char var_10 = (signed char)-84;
long long int var_11 = 4077995209716067841LL;
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
