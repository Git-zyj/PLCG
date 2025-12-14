#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7414183584526001755ULL;
long long int var_9 = 383014670691751269LL;
int var_11 = -1313353606;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)174;
short var_17 = (short)11404;
short var_18 = (short)-26677;
unsigned int var_19 = 52892764U;
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
