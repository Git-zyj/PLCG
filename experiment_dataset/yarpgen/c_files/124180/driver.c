#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 540976603;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2401571821U;
long long int var_11 = -5962992832301560734LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = -2108672843;
signed char var_16 = (signed char)82;
int var_17 = -1220459472;
long long int var_18 = 4678486098896865154LL;
signed char var_19 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
