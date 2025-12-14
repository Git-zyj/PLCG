#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15009;
int var_8 = -434564183;
int var_9 = 2116036606;
short var_10 = (short)28869;
long long int var_14 = 1372937914775422395LL;
int zero = 0;
unsigned int var_16 = 2338286875U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-119;
void init() {
}

void checksum() {
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
