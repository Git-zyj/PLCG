#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7409615981884530637ULL;
short var_3 = (short)26964;
unsigned short var_9 = (unsigned short)28547;
int var_11 = 578419970;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)55435;
int zero = 0;
short var_17 = (short)-22033;
unsigned short var_18 = (unsigned short)36576;
signed char var_19 = (signed char)35;
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
