#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 10524268464687639030ULL;
signed char var_6 = (signed char)57;
long long int var_7 = 499928139406349061LL;
unsigned short var_13 = (unsigned short)17057;
signed char var_16 = (signed char)-70;
int zero = 0;
signed char var_17 = (signed char)-95;
int var_18 = 773218453;
unsigned long long int var_19 = 17571530865039716547ULL;
unsigned short var_20 = (unsigned short)60899;
unsigned char var_21 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
