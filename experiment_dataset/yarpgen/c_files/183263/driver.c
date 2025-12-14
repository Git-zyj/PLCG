#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1088419590;
short var_1 = (short)8570;
signed char var_9 = (signed char)-48;
long long int var_11 = -1371135138583709666LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_19 = -6826992430239555187LL;
unsigned int var_20 = 1556003965U;
signed char var_21 = (signed char)98;
_Bool var_22 = (_Bool)1;
long long int var_23 = 8484628601790183446LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
