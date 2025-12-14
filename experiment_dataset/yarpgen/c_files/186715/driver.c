#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 660277602U;
signed char var_14 = (signed char)-114;
unsigned long long int var_17 = 13945745772558774037ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2816664775U;
unsigned char var_21 = (unsigned char)46;
short var_22 = (short)3058;
unsigned long long int var_23 = 10436217980024832147ULL;
unsigned long long int var_24 = 7458173354701481929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
