#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)20;
short var_11 = (short)26;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3315070379U;
unsigned int var_19 = 3492127615U;
unsigned int var_20 = 638456989U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
