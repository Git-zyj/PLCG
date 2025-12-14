#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4889355634345863338LL;
unsigned char var_4 = (unsigned char)208;
short var_5 = (short)15534;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)98;
int zero = 0;
unsigned int var_12 = 1481568670U;
int var_13 = -1545053309;
long long int var_14 = 582104245900515397LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
