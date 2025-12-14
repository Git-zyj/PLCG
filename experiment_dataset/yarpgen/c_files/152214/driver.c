#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1915422399;
long long int var_5 = -9215845595738777970LL;
unsigned int var_6 = 3198734119U;
unsigned int var_7 = 3386144802U;
unsigned int var_12 = 813424947U;
int zero = 0;
long long int var_19 = -2575165372275183813LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)30610;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
