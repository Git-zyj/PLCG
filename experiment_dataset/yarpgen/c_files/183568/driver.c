#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20714;
int var_3 = -578354115;
short var_5 = (short)29861;
unsigned int var_6 = 973676998U;
int var_7 = -490347365;
signed char var_8 = (signed char)-85;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13804254215430635383ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)52;
short var_12 = (short)-8914;
unsigned short var_13 = (unsigned short)7260;
int var_14 = -860889412;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
