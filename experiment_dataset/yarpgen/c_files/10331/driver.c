#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
long long int var_4 = -5790943321067776449LL;
signed char var_5 = (signed char)19;
unsigned long long int var_6 = 1026413744923182661ULL;
unsigned int var_10 = 2262179993U;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 586482200U;
unsigned long long int var_15 = 14029880470467395600ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9466242522594815195ULL;
_Bool var_21 = (_Bool)0;
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
