#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1233439636;
_Bool var_2 = (_Bool)0;
long long int var_3 = 3113177892032558215LL;
unsigned long long int var_4 = 3769542154357876311ULL;
int var_5 = 719593152;
unsigned long long int var_6 = 11925541642270448413ULL;
int var_7 = -1244199946;
_Bool var_8 = (_Bool)0;
int var_9 = 1580338359;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3721673560U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
