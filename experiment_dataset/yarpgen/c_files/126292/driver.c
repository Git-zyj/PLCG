#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18414985990984578965ULL;
unsigned long long int var_4 = 16607793566534243719ULL;
int var_6 = -1621855954;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 13852934440784594867ULL;
signed char var_18 = (signed char)-70;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1606713986619852525LL;
signed char var_22 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
