#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9054001265994110932LL;
int var_2 = -2130249956;
unsigned short var_4 = (unsigned short)20198;
short var_6 = (short)13485;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2419590496U;
signed char var_12 = (signed char)91;
short var_15 = (short)-550;
signed char var_19 = (signed char)35;
int zero = 0;
long long int var_20 = -7841547694464806805LL;
signed char var_21 = (signed char)85;
long long int var_22 = -5644847509877178052LL;
unsigned int var_23 = 3577259954U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
