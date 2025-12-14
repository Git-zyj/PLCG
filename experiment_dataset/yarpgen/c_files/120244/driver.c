#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2043091347;
unsigned long long int var_2 = 1965011842057924911ULL;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)1;
unsigned int var_8 = 3604687432U;
unsigned long long int var_10 = 6764055139048848619ULL;
int zero = 0;
int var_16 = -265151984;
_Bool var_17 = (_Bool)1;
long long int var_18 = -4165258601831506545LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
