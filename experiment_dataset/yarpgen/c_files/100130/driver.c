#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)123;
signed char var_4 = (signed char)65;
short var_6 = (short)12083;
int var_8 = 226630154;
int zero = 0;
unsigned int var_11 = 3273086683U;
long long int var_12 = 3746442612716014526LL;
unsigned short var_13 = (unsigned short)63094;
unsigned int var_14 = 2488744412U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
