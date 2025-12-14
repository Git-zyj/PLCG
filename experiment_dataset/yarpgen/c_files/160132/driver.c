#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)14116;
signed char var_9 = (signed char)-100;
short var_12 = (short)-6151;
unsigned short var_16 = (unsigned short)47719;
int var_17 = -719357529;
int zero = 0;
long long int var_20 = 5770133488093791886LL;
short var_21 = (short)29057;
short var_22 = (short)8259;
void init() {
}

void checksum() {
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
