#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1771201045U;
unsigned long long int var_2 = 18130939096593704016ULL;
unsigned char var_5 = (unsigned char)120;
unsigned int var_7 = 233148515U;
unsigned int var_9 = 4252451162U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_18 = -636742924;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
