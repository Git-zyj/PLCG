#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
_Bool var_4 = (_Bool)1;
signed char var_12 = (signed char)-116;
unsigned int var_13 = 2425070226U;
signed char var_17 = (signed char)42;
int zero = 0;
unsigned int var_19 = 984515038U;
int var_20 = 1426818587;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
