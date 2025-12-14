#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-91;
short var_4 = (short)2822;
int var_6 = 1850114225;
long long int var_7 = 6237903034396196149LL;
int var_8 = -701584820;
signed char var_9 = (signed char)5;
unsigned int var_10 = 2644972067U;
int var_11 = 427677114;
long long int var_12 = -3629485810648848300LL;
int var_13 = 1862130310;
int zero = 0;
unsigned short var_14 = (unsigned short)12027;
signed char var_15 = (signed char)3;
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
