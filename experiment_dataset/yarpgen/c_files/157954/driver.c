#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9914010753654869582ULL;
int var_2 = -1538481916;
signed char var_3 = (signed char)18;
short var_4 = (short)28006;
signed char var_8 = (signed char)-71;
long long int var_9 = 7994109822231799709LL;
int var_10 = 2019697448;
long long int var_12 = -1244827973754833635LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 12203696878152215608ULL;
unsigned int var_17 = 1227976359U;
unsigned int var_18 = 3182184550U;
signed char var_19 = (signed char)101;
void init() {
}

void checksum() {
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
