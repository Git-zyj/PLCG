#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1474064335723616489LL;
long long int var_3 = -3096871172093311665LL;
long long int var_4 = 5957798593368171463LL;
int var_5 = -1874451211;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 4259494109516369714ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
