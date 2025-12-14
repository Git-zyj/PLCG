#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1316975084U;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3352384225U;
unsigned long long int var_13 = 15516874492988193441ULL;
int zero = 0;
short var_17 = (short)-6320;
unsigned int var_18 = 3510791439U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
