#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned int var_13 = 47145129U;
unsigned long long int var_15 = 17004775154423169532ULL;
int zero = 0;
signed char var_16 = (signed char)-125;
int var_17 = -775673586;
signed char var_18 = (signed char)-82;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)58;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
