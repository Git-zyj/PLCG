#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1201945064;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)15741;
short var_7 = (short)-7478;
int var_8 = 24560658;
short var_10 = (short)6151;
int zero = 0;
unsigned long long int var_11 = 4408175019428346867ULL;
signed char var_12 = (signed char)67;
void init() {
}

void checksum() {
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
