#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54596;
unsigned int var_7 = 30541566U;
unsigned int var_8 = 3492757757U;
_Bool var_9 = (_Bool)0;
long long int var_14 = -9219300725104931576LL;
int zero = 0;
short var_17 = (short)21820;
unsigned short var_18 = (unsigned short)6098;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
