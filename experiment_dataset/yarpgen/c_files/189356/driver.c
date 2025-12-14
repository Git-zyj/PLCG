#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned char var_2 = (unsigned char)61;
unsigned short var_3 = (unsigned short)48977;
int var_6 = 1056449320;
short var_7 = (short)17701;
int zero = 0;
short var_10 = (short)23082;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11937468216694409919ULL;
unsigned short var_13 = (unsigned short)37348;
unsigned int var_14 = 2036763021U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
