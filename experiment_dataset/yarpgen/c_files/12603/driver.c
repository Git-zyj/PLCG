#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24072;
unsigned int var_1 = 1523255769U;
unsigned int var_3 = 2817101541U;
short var_5 = (short)-5489;
unsigned int var_6 = 2396500304U;
unsigned int var_7 = 3033839821U;
unsigned int var_8 = 3181481266U;
unsigned int var_9 = 1074381545U;
int zero = 0;
short var_11 = (short)2081;
short var_12 = (short)-28482;
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
