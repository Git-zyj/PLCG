#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 261499526230353271LL;
long long int var_6 = 9189893579721975744LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)79;
unsigned char var_16 = (unsigned char)63;
unsigned char var_17 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
