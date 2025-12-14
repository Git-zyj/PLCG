#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8032;
short var_1 = (short)300;
signed char var_4 = (signed char)-11;
unsigned int var_5 = 1051373144U;
signed char var_9 = (signed char)-44;
int var_14 = 1775985868;
int zero = 0;
long long int var_16 = 732642977493857312LL;
signed char var_17 = (signed char)-91;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16779480067400100391ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
