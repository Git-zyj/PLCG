#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3922634016U;
unsigned char var_8 = (unsigned char)233;
long long int var_10 = 4323081219569165212LL;
unsigned int var_11 = 3456905647U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7306894385776547466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
