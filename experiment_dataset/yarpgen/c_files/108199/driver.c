#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 569950327;
_Bool var_7 = (_Bool)0;
unsigned int var_15 = 1481172633U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2570749419U;
long long int var_19 = 4097871438057525156LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-74;
void init() {
}

void checksum() {
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
