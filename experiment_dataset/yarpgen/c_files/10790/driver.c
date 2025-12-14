#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11243;
short var_7 = (short)9049;
unsigned long long int var_8 = 8060885316199940716ULL;
signed char var_9 = (signed char)-66;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)72;
void init() {
}

void checksum() {
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
