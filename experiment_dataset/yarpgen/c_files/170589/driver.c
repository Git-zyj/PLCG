#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
unsigned short var_4 = (unsigned short)19963;
unsigned long long int var_9 = 13071395045420406503ULL;
short var_10 = (short)7000;
int var_13 = 1145281445;
unsigned short var_15 = (unsigned short)49239;
int zero = 0;
int var_16 = 826058925;
unsigned long long int var_17 = 5980533868644435060ULL;
unsigned short var_18 = (unsigned short)60902;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
