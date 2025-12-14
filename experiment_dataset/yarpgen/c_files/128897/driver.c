#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52417;
long long int var_3 = 7307192042617419368LL;
int var_5 = 329669372;
long long int var_6 = -3745768312291599095LL;
signed char var_9 = (signed char)-91;
unsigned char var_10 = (unsigned char)82;
int zero = 0;
unsigned int var_12 = 2159708396U;
unsigned short var_13 = (unsigned short)39678;
void init() {
}

void checksum() {
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
