#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7939576516638503248LL;
unsigned char var_3 = (unsigned char)172;
unsigned long long int var_5 = 9046821979873226629ULL;
signed char var_11 = (signed char)31;
signed char var_13 = (signed char)-69;
int var_17 = -1389513187;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1458778004U;
signed char var_21 = (signed char)0;
signed char var_22 = (signed char)111;
long long int var_23 = 5789346969268757922LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
