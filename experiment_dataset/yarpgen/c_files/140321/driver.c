#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4213998061U;
long long int var_6 = -4611021931134912665LL;
unsigned short var_12 = (unsigned short)54873;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3952697189U;
int var_15 = -975675061;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
