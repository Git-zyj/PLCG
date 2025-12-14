#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1155012831;
short var_10 = (short)29537;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 2320312899U;
signed char var_18 = (signed char)-118;
int zero = 0;
long long int var_20 = -4262287552458354868LL;
int var_21 = -778242510;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2125663804U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
