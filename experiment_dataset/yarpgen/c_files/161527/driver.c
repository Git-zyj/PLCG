#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)73;
unsigned int var_11 = 3916720263U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1252225346U;
unsigned int var_21 = 1244930212U;
signed char var_22 = (signed char)-123;
long long int var_23 = -5191189075848458675LL;
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
