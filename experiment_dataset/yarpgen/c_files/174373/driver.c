#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3799593143893938171LL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)5;
long long int var_8 = -8555630361140333311LL;
unsigned int var_16 = 1823383164U;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8484706228371646975LL;
unsigned long long int var_19 = 14768294769203689511ULL;
void init() {
}

void checksum() {
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
