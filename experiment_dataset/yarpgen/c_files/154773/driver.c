#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5830567217814002704ULL;
short var_1 = (short)-17432;
long long int var_3 = -6932940635976694899LL;
unsigned long long int var_5 = 15412458319818459292ULL;
unsigned short var_6 = (unsigned short)40549;
short var_8 = (short)8081;
unsigned long long int var_10 = 11411245100879447969ULL;
signed char var_11 = (signed char)-61;
long long int var_12 = -4452315814149832306LL;
int var_13 = -26445062;
int zero = 0;
short var_14 = (short)23963;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-17822;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
