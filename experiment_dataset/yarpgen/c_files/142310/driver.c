#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64886;
long long int var_7 = -7534223777517808832LL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)85;
int zero = 0;
unsigned int var_13 = 2766353484U;
long long int var_14 = -5417296294682076789LL;
unsigned char var_15 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
