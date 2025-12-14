#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14849840014158452803ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)113;
short var_7 = (short)821;
int var_12 = -1983989496;
signed char var_13 = (signed char)106;
unsigned long long int var_17 = 7562790770980590903ULL;
int zero = 0;
signed char var_20 = (signed char)-42;
unsigned long long int var_21 = 15102400725300810620ULL;
signed char var_22 = (signed char)91;
short var_23 = (short)-18536;
void init() {
}

void checksum() {
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
