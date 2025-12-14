#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3791941483U;
int var_2 = 488350068;
unsigned int var_4 = 1479093381U;
int var_7 = -1119900122;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-38;
unsigned int var_20 = 3754097840U;
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
