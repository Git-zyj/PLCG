#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)-15856;
long long int var_7 = 7047592928639653812LL;
unsigned short var_8 = (unsigned short)28005;
signed char var_10 = (signed char)111;
int zero = 0;
signed char var_12 = (signed char)-118;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
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
