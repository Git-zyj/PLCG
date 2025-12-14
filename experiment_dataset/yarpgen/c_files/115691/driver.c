#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2771271719U;
signed char var_4 = (signed char)-30;
unsigned short var_5 = (unsigned short)22983;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 2661509362U;
unsigned short var_14 = (unsigned short)43716;
int zero = 0;
signed char var_15 = (signed char)-18;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)41467;
signed char var_18 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
