#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37512;
unsigned int var_4 = 3095933651U;
long long int var_6 = -7840161104796052079LL;
unsigned int var_7 = 3525597743U;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)88;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
