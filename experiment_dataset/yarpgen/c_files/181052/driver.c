#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)87;
unsigned int var_10 = 2180520095U;
signed char var_11 = (signed char)60;
short var_14 = (short)1382;
signed char var_17 = (signed char)27;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)22;
int var_21 = 1233069049;
short var_22 = (short)-8216;
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
