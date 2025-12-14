#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3700843566U;
long long int var_4 = -4659627197868396005LL;
unsigned char var_5 = (unsigned char)164;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)29407;
long long int var_13 = -1147682040454437124LL;
unsigned int var_14 = 548984277U;
unsigned int var_15 = 3613593980U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
