#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -888274536;
unsigned int var_4 = 3943455149U;
signed char var_5 = (signed char)76;
unsigned char var_6 = (unsigned char)214;
unsigned int var_9 = 2965015959U;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5403283499544123442LL;
int var_12 = -1584668789;
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
