#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1163;
short var_6 = (short)-6479;
long long int var_7 = 3002045170615909854LL;
short var_8 = (short)30536;
long long int var_10 = -7344171748568793961LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-100;
int var_13 = 125979299;
void init() {
}

void checksum() {
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
