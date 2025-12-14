#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -343923397;
unsigned short var_6 = (unsigned short)8638;
unsigned long long int var_9 = 9921293711211202152ULL;
signed char var_15 = (signed char)-47;
int zero = 0;
signed char var_20 = (signed char)-113;
short var_21 = (short)14448;
unsigned int var_22 = 584084000U;
unsigned char var_23 = (unsigned char)254;
_Bool var_24 = (_Bool)0;
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
