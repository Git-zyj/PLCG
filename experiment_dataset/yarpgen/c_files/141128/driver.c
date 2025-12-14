#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1544344292544637545LL;
signed char var_8 = (signed char)-67;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 2906321151746923529LL;
unsigned int var_13 = 3516928150U;
signed char var_14 = (signed char)-59;
int var_15 = 1667399735;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
