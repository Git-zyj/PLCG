#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3618090609U;
short var_2 = (short)-1831;
signed char var_4 = (signed char)-70;
long long int var_9 = -1695039950872436166LL;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
unsigned long long int var_17 = 16505071894519569430ULL;
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
