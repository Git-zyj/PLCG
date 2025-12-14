#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8744;
unsigned int var_6 = 1660588712U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)9818;
int zero = 0;
short var_10 = (short)4205;
signed char var_11 = (signed char)-37;
int var_12 = -1552186463;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
