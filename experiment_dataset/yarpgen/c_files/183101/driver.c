#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10625529840287871742ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 12761109307965402424ULL;
unsigned int var_5 = 3628714525U;
_Bool var_6 = (_Bool)1;
int var_7 = 1513577577;
signed char var_9 = (signed char)64;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
unsigned short var_12 = (unsigned short)62049;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
