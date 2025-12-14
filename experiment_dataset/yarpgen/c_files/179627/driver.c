#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25505;
signed char var_1 = (signed char)103;
unsigned int var_4 = 2636065474U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 3592024634242208996ULL;
unsigned short var_12 = (unsigned short)45758;
int zero = 0;
unsigned short var_17 = (unsigned short)8997;
long long int var_18 = -5527793000519022966LL;
signed char var_19 = (signed char)107;
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
