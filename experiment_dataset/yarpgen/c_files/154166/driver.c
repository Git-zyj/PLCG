#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 218447907U;
unsigned long long int var_4 = 12966694426751556791ULL;
int var_6 = -1097976926;
_Bool var_11 = (_Bool)0;
long long int var_13 = -2624412109214436286LL;
unsigned char var_18 = (unsigned char)34;
int zero = 0;
int var_19 = -1014976303;
unsigned int var_20 = 1886368557U;
long long int var_21 = 7893379848007918982LL;
int var_22 = -107172066;
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
