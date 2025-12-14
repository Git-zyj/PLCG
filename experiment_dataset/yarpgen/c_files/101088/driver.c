#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29239;
short var_1 = (short)-26514;
signed char var_2 = (signed char)-73;
long long int var_6 = -5542992140129642787LL;
short var_9 = (short)-23463;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_16 = (short)29429;
signed char var_18 = (signed char)70;
int zero = 0;
signed char var_20 = (signed char)76;
int var_21 = 1927452790;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
