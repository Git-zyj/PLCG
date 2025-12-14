#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1758851188;
signed char var_3 = (signed char)27;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3625002331U;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3144638872U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7307;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
