#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_15 = 10295530632198566135ULL;
long long int var_16 = -295276637435380451LL;
unsigned char var_17 = (unsigned char)171;
unsigned char var_19 = (unsigned char)104;
int zero = 0;
unsigned int var_20 = 1743664639U;
long long int var_21 = -8542737964786222647LL;
void init() {
}

void checksum() {
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
