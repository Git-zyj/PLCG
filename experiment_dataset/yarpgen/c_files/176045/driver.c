#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -561338456;
short var_1 = (short)10242;
short var_3 = (short)-25913;
long long int var_6 = 180242603469675923LL;
long long int var_7 = 6268032760135183087LL;
int zero = 0;
long long int var_11 = 9154761219928677420LL;
signed char var_12 = (signed char)113;
int var_13 = -1491836289;
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
