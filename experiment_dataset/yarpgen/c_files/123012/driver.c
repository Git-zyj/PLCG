#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 590013560U;
int var_1 = -1413127293;
long long int var_2 = 4231669855589892692LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1737701291U;
int var_7 = -250737147;
unsigned int var_8 = 1845329683U;
int zero = 0;
unsigned int var_10 = 3932253551U;
short var_11 = (short)13045;
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
