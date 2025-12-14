#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 4025517654U;
unsigned short var_4 = (unsigned short)14053;
signed char var_6 = (signed char)-102;
short var_7 = (short)-516;
short var_10 = (short)8308;
unsigned char var_12 = (unsigned char)160;
int zero = 0;
unsigned long long int var_14 = 13487614948780001092ULL;
long long int var_15 = -765227357739585707LL;
short var_16 = (short)11808;
unsigned short var_17 = (unsigned short)3963;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
