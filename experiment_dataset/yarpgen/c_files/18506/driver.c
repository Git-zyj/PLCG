#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)15;
int var_5 = -640470404;
unsigned short var_8 = (unsigned short)33771;
int var_11 = 1675331334;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -5389456956792856049LL;
signed char var_17 = (signed char)124;
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
