#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 6904333297692666228LL;
signed char var_5 = (signed char)43;
unsigned int var_6 = 3809982903U;
_Bool var_7 = (_Bool)1;
long long int var_12 = -6611962167075759518LL;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)117;
int zero = 0;
int var_20 = -649826004;
int var_21 = 1480119298;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3643213442U;
long long int var_24 = 8689669632893711911LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
