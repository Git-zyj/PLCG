#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 191823631020462021ULL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-10419;
long long int var_7 = 6707019541034699813LL;
unsigned int var_11 = 3584808746U;
int var_12 = 1654269243;
int zero = 0;
int var_18 = 123597987;
signed char var_19 = (signed char)17;
int var_20 = -1553325044;
void init() {
}

void checksum() {
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
