#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned int var_11 = 388673557U;
long long int var_12 = -1555106032702986447LL;
signed char var_13 = (signed char)85;
unsigned long long int var_14 = 12501168443071254558ULL;
int zero = 0;
unsigned long long int var_17 = 12483588216601177059ULL;
unsigned int var_18 = 679706983U;
void init() {
}

void checksum() {
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
