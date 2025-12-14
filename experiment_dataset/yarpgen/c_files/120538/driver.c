#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12413498086267534757ULL;
unsigned int var_4 = 302568624U;
unsigned char var_17 = (unsigned char)252;
int zero = 0;
unsigned long long int var_18 = 2683317502420612789ULL;
long long int var_19 = -7592341551305278361LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
