#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_5 = -1823189032;
short var_10 = (short)-25264;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3295798123U;
unsigned int var_21 = 4223369550U;
unsigned int var_22 = 1461226002U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
