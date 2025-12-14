#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3442899191U;
unsigned int var_3 = 2401349594U;
short var_4 = (short)19478;
short var_6 = (short)4976;
short var_10 = (short)-11362;
short var_11 = (short)-529;
short var_13 = (short)-5874;
unsigned int var_14 = 3941816378U;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)3202;
short var_18 = (short)-28916;
unsigned int var_19 = 4066911604U;
short var_20 = (short)26723;
unsigned int var_21 = 75683965U;
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
