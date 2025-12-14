#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14946337412113864997ULL;
unsigned short var_1 = (unsigned short)36640;
unsigned long long int var_2 = 8170732062742228229ULL;
unsigned short var_5 = (unsigned short)21848;
short var_11 = (short)1806;
long long int var_12 = -412293397042580983LL;
int zero = 0;
unsigned int var_13 = 1211750316U;
signed char var_14 = (signed char)-116;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3657279631U;
unsigned char var_17 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
