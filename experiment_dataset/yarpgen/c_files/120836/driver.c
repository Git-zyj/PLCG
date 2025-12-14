#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
_Bool var_5 = (_Bool)0;
signed char var_16 = (signed char)70;
long long int var_19 = 7647097249483132205LL;
int zero = 0;
unsigned char var_20 = (unsigned char)213;
unsigned long long int var_21 = 9546198569074195540ULL;
long long int var_22 = 3047905504758272961LL;
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
