#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned int var_1 = 3950846937U;
short var_4 = (short)26190;
_Bool var_5 = (_Bool)0;
short var_6 = (short)11226;
int var_7 = 1796199527;
signed char var_8 = (signed char)21;
int zero = 0;
unsigned short var_10 = (unsigned short)17875;
_Bool var_11 = (_Bool)0;
short var_12 = (short)15636;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
