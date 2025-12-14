#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4305939207789236021ULL;
signed char var_4 = (signed char)-121;
_Bool var_6 = (_Bool)0;
unsigned int var_14 = 2878621864U;
short var_17 = (short)30718;
int zero = 0;
unsigned short var_20 = (unsigned short)60396;
int var_21 = 1896859556;
void init() {
}

void checksum() {
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
