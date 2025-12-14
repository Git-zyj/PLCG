#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1774783921U;
unsigned int var_10 = 2344982292U;
unsigned int var_13 = 4189732882U;
int zero = 0;
long long int var_16 = 3936204789134956154LL;
signed char var_17 = (signed char)19;
void init() {
}

void checksum() {
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
