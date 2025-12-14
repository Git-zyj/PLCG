#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53135;
unsigned int var_2 = 3665667416U;
_Bool var_6 = (_Bool)0;
int var_8 = 881254430;
int var_11 = -171237126;
unsigned short var_13 = (unsigned short)35107;
int var_16 = 285631438;
int zero = 0;
signed char var_18 = (signed char)57;
unsigned int var_19 = 2476460950U;
unsigned int var_20 = 2968391367U;
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
