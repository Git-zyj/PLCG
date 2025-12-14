#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
_Bool var_6 = (_Bool)1;
int var_9 = 351089253;
unsigned int var_11 = 2082415742U;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)61;
int zero = 0;
unsigned int var_17 = 3220994106U;
unsigned char var_18 = (unsigned char)144;
void init() {
}

void checksum() {
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
