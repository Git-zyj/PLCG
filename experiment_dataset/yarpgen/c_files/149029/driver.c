#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
signed char var_5 = (signed char)13;
unsigned int var_6 = 1436066404U;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)-31772;
signed char var_13 = (signed char)-110;
void init() {
}

void checksum() {
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
