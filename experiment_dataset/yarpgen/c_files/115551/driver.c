#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7441422002968823781LL;
long long int var_1 = -6920264882427160022LL;
unsigned long long int var_2 = 2040701555471423336ULL;
int var_3 = 1378924009;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 438372716U;
unsigned long long int var_9 = 1085377423881015339ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6035712694983211822LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-120;
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
