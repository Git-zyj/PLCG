#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
short var_11 = (short)-15554;
long long int var_12 = -8325960187759909653LL;
int zero = 0;
signed char var_16 = (signed char)111;
unsigned long long int var_17 = 9419669708811880852ULL;
unsigned int var_18 = 3294089534U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
