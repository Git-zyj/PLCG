#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_7 = 10331149141147068027ULL;
short var_10 = (short)27812;
unsigned int var_11 = 4036016949U;
unsigned char var_16 = (unsigned char)201;
unsigned int var_19 = 1496474720U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4093739468889549466LL;
unsigned long long int var_22 = 4167401935669777621ULL;
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
