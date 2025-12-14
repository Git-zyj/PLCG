#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned int var_4 = 3520783144U;
unsigned long long int var_5 = 15951044281878022514ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)3496;
int zero = 0;
unsigned long long int var_10 = 10036187905394780475ULL;
signed char var_11 = (signed char)-98;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
