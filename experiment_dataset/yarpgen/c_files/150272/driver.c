#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 133563439U;
unsigned short var_7 = (unsigned short)1262;
int zero = 0;
long long int var_10 = -9123594227663354619LL;
unsigned int var_11 = 1439753744U;
long long int var_12 = -3861637813107800466LL;
long long int var_13 = 3530020217269185828LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
