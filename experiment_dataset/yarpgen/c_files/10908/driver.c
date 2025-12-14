#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
unsigned int var_2 = 624563757U;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 3127931469U;
unsigned int var_11 = 799407787U;
unsigned short var_12 = (unsigned short)3751;
unsigned char var_14 = (unsigned char)45;
signed char var_16 = (signed char)86;
int zero = 0;
signed char var_18 = (signed char)-116;
long long int var_19 = -1296589005902584633LL;
unsigned short var_20 = (unsigned short)27136;
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
