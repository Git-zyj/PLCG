#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3042875269U;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)33635;
long long int var_10 = -6244989501289078528LL;
signed char var_11 = (signed char)-108;
unsigned int var_13 = 1611852711U;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-13447;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3155887150447849609LL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-17430;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
