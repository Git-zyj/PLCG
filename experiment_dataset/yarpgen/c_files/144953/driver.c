#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
long long int var_7 = 413241949329573487LL;
long long int var_9 = 6552878936800722758LL;
unsigned int var_10 = 1216172489U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)551;
unsigned char var_15 = (unsigned char)110;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)12848;
signed char var_18 = (signed char)-34;
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
