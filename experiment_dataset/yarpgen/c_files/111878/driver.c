#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26936;
signed char var_2 = (signed char)43;
unsigned short var_3 = (unsigned short)10024;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)113;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-53;
signed char var_10 = (signed char)-88;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26348;
_Bool var_15 = (_Bool)0;
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
