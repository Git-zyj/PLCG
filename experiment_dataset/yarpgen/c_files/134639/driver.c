#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3009256785U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 685728182U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-116;
signed char var_9 = (signed char)-67;
int var_11 = -1075114837;
unsigned int var_14 = 2439250458U;
int zero = 0;
int var_15 = 1044174807;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
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
