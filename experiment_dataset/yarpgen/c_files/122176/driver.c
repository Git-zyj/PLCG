#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6202;
int var_2 = 415932952;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6039162390130032825LL;
int zero = 0;
unsigned int var_11 = 1361978593U;
int var_12 = -1282527661;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
