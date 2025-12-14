#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1847;
int var_2 = 674818422;
long long int var_4 = 3123676104423480097LL;
unsigned short var_5 = (unsigned short)45933;
signed char var_7 = (signed char)-110;
signed char var_10 = (signed char)94;
signed char var_11 = (signed char)-12;
int zero = 0;
unsigned int var_12 = 43408792U;
signed char var_13 = (signed char)24;
_Bool var_14 = (_Bool)0;
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
