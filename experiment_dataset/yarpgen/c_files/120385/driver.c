#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
long long int var_3 = 2201562354240229511LL;
unsigned int var_6 = 2680431454U;
unsigned long long int var_7 = 9922173950214588386ULL;
short var_9 = (short)6266;
unsigned long long int var_10 = 5746647443591000921ULL;
unsigned long long int var_11 = 7494847801418642ULL;
signed char var_17 = (signed char)86;
int zero = 0;
short var_19 = (short)5171;
_Bool var_20 = (_Bool)0;
short var_21 = (short)14684;
long long int var_22 = 1916447178302966299LL;
int var_23 = -1933025420;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
