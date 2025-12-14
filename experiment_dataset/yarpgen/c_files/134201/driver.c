#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -941850572;
signed char var_4 = (signed char)-11;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 111103037U;
int var_11 = -856616604;
unsigned int var_12 = 2772057362U;
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
