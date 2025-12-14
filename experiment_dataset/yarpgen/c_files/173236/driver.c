#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
unsigned long long int var_1 = 6905619381545816811ULL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)87;
int var_11 = 1912445331;
unsigned int var_13 = 1475979463U;
short var_14 = (short)-25187;
unsigned long long int var_15 = 1608827284341944174ULL;
int zero = 0;
unsigned long long int var_17 = 11343115864958299606ULL;
unsigned short var_18 = (unsigned short)27571;
long long int var_19 = 3966289637277827447LL;
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
