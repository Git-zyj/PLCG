#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
unsigned int var_3 = 1588130515U;
signed char var_8 = (signed char)-16;
short var_10 = (short)-16069;
int zero = 0;
long long int var_12 = -4734361131831558215LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4423544854807427404LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
