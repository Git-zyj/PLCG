#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4293394161U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-12;
signed char var_4 = (signed char)-89;
signed char var_17 = (signed char)-91;
int zero = 0;
signed char var_18 = (signed char)46;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
