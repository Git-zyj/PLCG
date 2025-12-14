#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 502546599;
_Bool var_1 = (_Bool)0;
unsigned short var_10 = (unsigned short)59951;
int var_11 = -1034011835;
signed char var_12 = (signed char)79;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
short var_15 = (short)13178;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
