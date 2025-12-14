#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63946;
signed char var_1 = (signed char)-126;
unsigned int var_5 = 3917574058U;
unsigned short var_6 = (unsigned short)52664;
unsigned short var_7 = (unsigned short)11074;
int var_9 = 1513203394;
unsigned short var_10 = (unsigned short)4351;
unsigned short var_12 = (unsigned short)57788;
int zero = 0;
unsigned short var_19 = (unsigned short)24334;
signed char var_20 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
