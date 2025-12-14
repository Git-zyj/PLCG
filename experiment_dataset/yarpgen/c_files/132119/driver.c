#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 299794870U;
signed char var_4 = (signed char)-19;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)88;
unsigned long long int var_13 = 14855097869644681387ULL;
int zero = 0;
unsigned int var_15 = 104463067U;
long long int var_16 = 849056754318884888LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14853468461803204057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
