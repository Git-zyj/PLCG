#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3613894209U;
int var_1 = 102869674;
unsigned long long int var_4 = 11978446668331318489ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-35;
unsigned int var_7 = 2089769096U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 30131003204725029LL;
short var_11 = (short)14057;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3084640438200827449ULL;
int var_14 = 1881760764;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
