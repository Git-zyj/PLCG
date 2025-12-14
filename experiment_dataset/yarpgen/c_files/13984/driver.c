#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
short var_1 = (short)1447;
signed char var_5 = (signed char)-25;
short var_7 = (short)12426;
unsigned short var_10 = (unsigned short)45747;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)16317;
short var_18 = (short)-15908;
int zero = 0;
unsigned long long int var_20 = 11098820921912469822ULL;
unsigned long long int var_21 = 13932633290291463395ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
