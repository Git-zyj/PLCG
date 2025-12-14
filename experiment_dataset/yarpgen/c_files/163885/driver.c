#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2898085760U;
unsigned short var_2 = (unsigned short)46375;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)9061;
signed char var_6 = (signed char)-121;
short var_8 = (short)6088;
int zero = 0;
unsigned short var_12 = (unsigned short)39001;
_Bool var_13 = (_Bool)1;
int var_14 = -800604145;
int var_15 = 877015178;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
