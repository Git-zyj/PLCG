#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 322400795U;
unsigned char var_4 = (unsigned char)213;
signed char var_5 = (signed char)14;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)112;
long long int var_18 = 4245840725742682050LL;
signed char var_19 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
