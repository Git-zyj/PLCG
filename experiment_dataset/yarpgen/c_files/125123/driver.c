#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)14629;
unsigned int var_8 = 348001988U;
signed char var_9 = (signed char)4;
int zero = 0;
unsigned short var_12 = (unsigned short)46538;
_Bool var_13 = (_Bool)0;
short var_14 = (short)3510;
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
