#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)25;
int var_5 = -916017418;
signed char var_6 = (signed char)86;
int var_7 = 956615231;
int var_10 = -2134826713;
unsigned char var_12 = (unsigned char)237;
int zero = 0;
unsigned int var_13 = 97672102U;
int var_14 = -804943051;
int var_15 = 575512958;
unsigned int var_16 = 164023188U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
