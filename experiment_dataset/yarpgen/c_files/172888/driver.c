#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1084748373;
signed char var_3 = (signed char)-83;
signed char var_7 = (signed char)121;
unsigned short var_8 = (unsigned short)42887;
short var_9 = (short)-5829;
unsigned short var_10 = (unsigned short)9061;
int zero = 0;
signed char var_11 = (signed char)-127;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
