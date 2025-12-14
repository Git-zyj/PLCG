#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2532057554U;
signed char var_1 = (signed char)-105;
_Bool var_2 = (_Bool)0;
short var_5 = (short)2493;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 981520391913319400ULL;
unsigned int var_10 = 1316136051U;
int zero = 0;
unsigned int var_11 = 2160203675U;
unsigned long long int var_12 = 9568849825226557784ULL;
long long int var_13 = 8803597585717897334LL;
unsigned short var_14 = (unsigned short)27798;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
