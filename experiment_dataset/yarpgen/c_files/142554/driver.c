#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-51;
signed char var_8 = (signed char)74;
signed char var_9 = (signed char)-104;
int zero = 0;
unsigned short var_10 = (unsigned short)46619;
unsigned short var_11 = (unsigned short)21532;
signed char var_12 = (signed char)34;
int var_13 = -693216914;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
