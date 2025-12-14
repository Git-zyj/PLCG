#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1180752663U;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 4683663702947680967LL;
unsigned long long int var_6 = 9957779267079063720ULL;
unsigned long long int var_8 = 1078562318920183784ULL;
int zero = 0;
signed char var_10 = (signed char)-90;
unsigned char var_11 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
