#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_12 = 7659489670647570302ULL;
unsigned char var_13 = (unsigned char)238;
signed char var_14 = (signed char)94;
unsigned int var_17 = 2794684780U;
unsigned int var_18 = 2589620619U;
int zero = 0;
signed char var_19 = (signed char)-29;
long long int var_20 = -7213999245581139266LL;
long long int var_21 = 189086457594867422LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
