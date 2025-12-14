#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481832601U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)27463;
unsigned short var_8 = (unsigned short)37147;
int zero = 0;
signed char var_12 = (signed char)30;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-112;
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
