#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2932604652U;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-12803;
unsigned int var_7 = 2516365632U;
unsigned int var_8 = 1321269662U;
long long int var_10 = 162909594739078943LL;
int zero = 0;
int var_11 = 1620025325;
short var_12 = (short)12464;
long long int var_13 = 114529846055179277LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
