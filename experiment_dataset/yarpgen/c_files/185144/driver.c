#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 655830157U;
unsigned long long int var_4 = 9503133024783919672ULL;
signed char var_7 = (signed char)37;
signed char var_8 = (signed char)123;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned int var_15 = 3952784309U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
