#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12467714113402568782ULL;
long long int var_2 = -7838250698957477062LL;
unsigned char var_12 = (unsigned char)213;
int zero = 0;
short var_19 = (short)23979;
signed char var_20 = (signed char)91;
signed char var_21 = (signed char)7;
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
