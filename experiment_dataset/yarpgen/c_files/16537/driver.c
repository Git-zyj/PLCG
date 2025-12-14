#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4465744464203683382LL;
unsigned short var_10 = (unsigned short)59094;
unsigned short var_12 = (unsigned short)26815;
long long int var_14 = 4301589659428049661LL;
int zero = 0;
unsigned short var_15 = (unsigned short)4233;
unsigned short var_16 = (unsigned short)28778;
unsigned short var_17 = (unsigned short)27197;
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
