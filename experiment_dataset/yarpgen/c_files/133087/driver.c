#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1756037151;
signed char var_2 = (signed char)-2;
short var_4 = (short)26381;
unsigned int var_7 = 886339139U;
short var_10 = (short)-13896;
unsigned long long int var_11 = 8925250239061101418ULL;
unsigned int var_13 = 4056029065U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)58320;
int var_17 = 1131309977;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
