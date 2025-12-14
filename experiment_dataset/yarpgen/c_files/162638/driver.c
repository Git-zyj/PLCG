#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)470;
unsigned short var_3 = (unsigned short)47923;
_Bool var_6 = (_Bool)1;
short var_7 = (short)18035;
unsigned int var_8 = 4200392406U;
unsigned int var_10 = 2829289784U;
signed char var_12 = (signed char)102;
signed char var_13 = (signed char)-7;
unsigned int var_14 = 3164376757U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = -366133591844932294LL;
short var_19 = (short)14119;
long long int var_20 = 4213057921837972471LL;
long long int var_21 = 3467334947026229110LL;
int var_22 = -1564802686;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
