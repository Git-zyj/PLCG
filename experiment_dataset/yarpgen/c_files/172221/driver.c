#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1195007915U;
signed char var_6 = (signed char)-42;
unsigned char var_7 = (unsigned char)251;
short var_8 = (short)3369;
short var_9 = (short)-26133;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -799356081;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
