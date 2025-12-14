#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42232;
int var_1 = -1324285879;
unsigned int var_6 = 116823513U;
long long int var_7 = -8928507300877004312LL;
int zero = 0;
unsigned int var_10 = 2288827577U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4879756297261762151LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
