#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15409688507605331600ULL;
unsigned short var_5 = (unsigned short)40959;
long long int var_7 = -4938384773810038368LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 13621970465332523187ULL;
signed char var_12 = (signed char)1;
int zero = 0;
unsigned short var_20 = (unsigned short)22359;
unsigned short var_21 = (unsigned short)55954;
unsigned int var_22 = 1095324806U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
