#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)72;
int var_5 = 2087054587;
short var_10 = (short)32205;
short var_13 = (short)12437;
int zero = 0;
unsigned int var_17 = 3481046158U;
long long int var_18 = 6972652396864521909LL;
unsigned char var_19 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
