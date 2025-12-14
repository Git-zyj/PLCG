#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2764841250U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4141617195U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3338334498U;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1878652923U;
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
