#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7650034091464050191LL;
_Bool var_4 = (_Bool)0;
unsigned short var_10 = (unsigned short)27477;
int zero = 0;
unsigned char var_11 = (unsigned char)40;
unsigned int var_12 = 2232760690U;
int var_13 = 287639903;
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
