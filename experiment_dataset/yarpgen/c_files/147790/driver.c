#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5740954159759793253ULL;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-74;
unsigned int var_12 = 3047523830U;
unsigned long long int var_16 = 8113902829604038513ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)152;
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
