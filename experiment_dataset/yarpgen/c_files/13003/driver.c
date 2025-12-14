#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 80807445U;
long long int var_2 = -643968620083769319LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-13;
long long int var_9 = -9045985559771083947LL;
long long int var_12 = -7663536042089839990LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)139;
long long int var_16 = -6539152688768401576LL;
short var_17 = (short)-19640;
int zero = 0;
unsigned int var_18 = 784135873U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
