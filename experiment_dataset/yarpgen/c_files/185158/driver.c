#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1439146506;
signed char var_2 = (signed char)-28;
int var_3 = -1382884052;
signed char var_5 = (signed char)-125;
int var_6 = 290019272;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)18;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)-75;
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
