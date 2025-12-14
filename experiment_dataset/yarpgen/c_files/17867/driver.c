#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5481549280470324400LL;
unsigned short var_1 = (unsigned short)323;
signed char var_6 = (signed char)(-127 - 1);
_Bool var_8 = (_Bool)1;
unsigned int var_14 = 3684187696U;
long long int var_17 = 4349137789531201259LL;
int zero = 0;
unsigned int var_19 = 3061957653U;
long long int var_20 = -4796126455182766315LL;
signed char var_21 = (signed char)102;
void init() {
}

void checksum() {
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
