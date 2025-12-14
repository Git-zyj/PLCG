#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14434501922542723038ULL;
signed char var_1 = (signed char)-52;
unsigned short var_2 = (unsigned short)143;
unsigned short var_4 = (unsigned short)11577;
unsigned long long int var_5 = 1916262690573613486ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)24910;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13998;
unsigned int var_14 = 2913609535U;
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
