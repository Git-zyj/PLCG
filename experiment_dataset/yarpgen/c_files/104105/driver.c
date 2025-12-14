#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)12;
signed char var_5 = (signed char)-26;
unsigned char var_6 = (unsigned char)157;
unsigned char var_7 = (unsigned char)165;
unsigned long long int var_10 = 4062108835718187535ULL;
long long int var_11 = 3244615385513459836LL;
int var_13 = 841437997;
unsigned char var_14 = (unsigned char)102;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)32;
long long int var_19 = -3946942624011871588LL;
unsigned short var_20 = (unsigned short)43230;
void init() {
}

void checksum() {
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
