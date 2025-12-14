#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10836399519487900279ULL;
short var_2 = (short)-782;
signed char var_5 = (signed char)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_19 = -187684646;
short var_20 = (short)-23136;
long long int var_21 = -8883308278357676123LL;
int var_22 = 1918129612;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
