#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)615;
unsigned long long int var_3 = 3134372504028443297ULL;
short var_4 = (short)13767;
int var_5 = -1293383438;
signed char var_6 = (signed char)-66;
int zero = 0;
unsigned int var_10 = 1999647243U;
short var_11 = (short)-18282;
signed char var_12 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
