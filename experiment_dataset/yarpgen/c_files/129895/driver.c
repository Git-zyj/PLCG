#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4796843751015943629ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 217626924U;
unsigned long long int var_13 = 136125081113075164ULL;
int zero = 0;
unsigned long long int var_19 = 16864137545861334974ULL;
short var_20 = (short)8986;
short var_21 = (short)-23896;
long long int var_22 = 3767966368929707591LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
