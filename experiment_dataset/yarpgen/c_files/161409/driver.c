#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
int var_3 = -1402430427;
signed char var_4 = (signed char)14;
long long int var_9 = 7317627255443353417LL;
unsigned short var_11 = (unsigned short)5754;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_16 = (short)30495;
long long int var_17 = 4404878894118847913LL;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
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
