#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
_Bool var_2 = (_Bool)1;
unsigned int var_8 = 860342507U;
int zero = 0;
signed char var_13 = (signed char)125;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2139997088U;
int var_16 = 1815485659;
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
