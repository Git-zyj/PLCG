#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-6033;
unsigned char var_7 = (unsigned char)161;
int var_9 = 988921133;
short var_14 = (short)7591;
int zero = 0;
short var_15 = (short)-25320;
unsigned int var_16 = 4022992698U;
unsigned int var_17 = 2616637519U;
short var_18 = (short)14179;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
