#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4779231850248122451ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 709910337U;
signed char var_9 = (signed char)-12;
unsigned short var_11 = (unsigned short)40053;
signed char var_13 = (signed char)11;
int var_16 = 53968918;
int zero = 0;
unsigned int var_20 = 3121970335U;
unsigned long long int var_21 = 3884167269950854945ULL;
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
