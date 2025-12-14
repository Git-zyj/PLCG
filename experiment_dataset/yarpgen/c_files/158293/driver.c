#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1616453205;
int var_8 = -84968747;
unsigned char var_9 = (unsigned char)6;
unsigned int var_11 = 1908745574U;
signed char var_14 = (signed char)92;
signed char var_16 = (signed char)1;
int zero = 0;
int var_20 = -1595577565;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12060065287933275252ULL;
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
