#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
unsigned int var_1 = 3373783663U;
unsigned int var_2 = 698850543U;
short var_9 = (short)-4033;
signed char var_10 = (signed char)126;
short var_11 = (short)4111;
signed char var_13 = (signed char)79;
int zero = 0;
unsigned long long int var_17 = 13051078757528468777ULL;
unsigned int var_18 = 3666474232U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
