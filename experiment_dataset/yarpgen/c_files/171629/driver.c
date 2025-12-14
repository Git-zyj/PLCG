#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1686624957614151055LL;
int var_5 = 134718788;
signed char var_6 = (signed char)-92;
long long int var_9 = -254825592873607100LL;
int var_11 = -1697328112;
unsigned char var_13 = (unsigned char)18;
unsigned char var_15 = (unsigned char)97;
int var_16 = -1527962977;
int zero = 0;
int var_19 = -1712638098;
signed char var_20 = (signed char)63;
int var_21 = -1981885589;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
