#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-15583;
unsigned int var_4 = 123755799U;
int var_5 = -1594317512;
unsigned short var_8 = (unsigned short)31780;
int var_9 = -1900640737;
int zero = 0;
signed char var_10 = (signed char)-120;
signed char var_11 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
