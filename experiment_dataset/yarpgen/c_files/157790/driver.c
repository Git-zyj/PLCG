#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
short var_1 = (short)-23934;
unsigned int var_2 = 2381659737U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-90;
unsigned long long int var_5 = 8074908927729734723ULL;
long long int var_8 = -8916016160596829642LL;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10253256933583548071ULL;
unsigned char var_14 = (unsigned char)143;
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
