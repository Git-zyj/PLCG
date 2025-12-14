#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 2053560222108247542ULL;
unsigned long long int var_10 = 9371318167502729808ULL;
unsigned long long int var_12 = 7381308813703638347ULL;
unsigned int var_14 = 734220526U;
int zero = 0;
unsigned long long int var_20 = 9236142964207119119ULL;
unsigned long long int var_21 = 8737056845340451326ULL;
unsigned int var_22 = 3784334430U;
void init() {
}

void checksum() {
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
