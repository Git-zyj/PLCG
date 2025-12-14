#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3519144570U;
unsigned int var_10 = 1561315016U;
unsigned long long int var_18 = 14368910979289713076ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-51;
signed char var_22 = (signed char)-84;
signed char var_23 = (signed char)59;
unsigned int var_24 = 748407607U;
_Bool var_25 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
