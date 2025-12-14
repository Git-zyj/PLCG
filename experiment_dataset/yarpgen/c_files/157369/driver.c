#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3994705168U;
long long int var_1 = 5868790339413117668LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 16423316505191072829ULL;
short var_19 = (short)24167;
unsigned char var_20 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
