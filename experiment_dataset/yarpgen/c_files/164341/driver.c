#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1114501015;
signed char var_4 = (signed char)-97;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-11782;
unsigned int var_11 = 3577570350U;
int zero = 0;
unsigned int var_13 = 2983831965U;
int var_14 = -2065066730;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
