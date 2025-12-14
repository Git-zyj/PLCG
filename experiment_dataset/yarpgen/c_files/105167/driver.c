#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37125;
short var_6 = (short)-28602;
long long int var_10 = 664925262073798094LL;
unsigned int var_12 = 2309963983U;
int zero = 0;
short var_13 = (short)4;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
