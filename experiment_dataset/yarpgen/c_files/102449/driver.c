#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1592836287;
_Bool var_6 = (_Bool)0;
int var_8 = -2100566239;
signed char var_18 = (signed char)-120;
int zero = 0;
signed char var_20 = (signed char)81;
int var_21 = 1006411640;
_Bool var_22 = (_Bool)1;
int var_23 = -593016749;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
