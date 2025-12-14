#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29884;
short var_5 = (short)6683;
_Bool var_10 = (_Bool)1;
int var_11 = -1490105244;
long long int var_13 = 5205404005407043036LL;
short var_16 = (short)18873;
int zero = 0;
signed char var_17 = (signed char)-65;
long long int var_18 = -1152148417288642179LL;
unsigned char var_19 = (unsigned char)102;
unsigned int var_20 = 2455771294U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
