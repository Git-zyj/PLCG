#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 315344770157848173LL;
long long int var_5 = 2765673241528582424LL;
int var_9 = -968933922;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)89;
unsigned long long int var_17 = 386816179272843532ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)21903;
unsigned int var_21 = 2912596046U;
int var_22 = -951312663;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
