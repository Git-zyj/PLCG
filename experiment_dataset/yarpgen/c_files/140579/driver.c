#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13525904110423429145ULL;
unsigned long long int var_1 = 7603943954611595265ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 15812583654450647484ULL;
unsigned long long int var_5 = 3774344169724564049ULL;
unsigned int var_6 = 3393035000U;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 4343766482063895569ULL;
unsigned long long int var_12 = 5208453507660262936ULL;
unsigned int var_13 = 4124901397U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
