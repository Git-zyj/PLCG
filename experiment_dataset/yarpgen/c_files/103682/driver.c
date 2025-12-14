#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3111;
short var_1 = (short)12303;
int var_5 = -968089035;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2449005599U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int var_18 = -275363348;
int zero = 0;
short var_19 = (short)-10833;
short var_20 = (short)-13916;
signed char var_21 = (signed char)-104;
short var_22 = (short)22557;
void init() {
}

void checksum() {
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
