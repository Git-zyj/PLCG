#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 151402792U;
unsigned int var_2 = 2447807683U;
unsigned int var_3 = 954480494U;
long long int var_4 = 3342505345238339426LL;
unsigned int var_6 = 402097861U;
long long int var_7 = 6210634197984064367LL;
short var_8 = (short)-9824;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4053525713U;
long long int var_13 = 7417279972149941337LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
