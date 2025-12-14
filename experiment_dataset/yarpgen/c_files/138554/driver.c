#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15056;
_Bool var_4 = (_Bool)0;
int var_8 = 2144941884;
short var_11 = (short)8857;
signed char var_13 = (signed char)20;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = -3602509226598694386LL;
unsigned int var_19 = 4146896920U;
unsigned int var_20 = 3497167161U;
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
