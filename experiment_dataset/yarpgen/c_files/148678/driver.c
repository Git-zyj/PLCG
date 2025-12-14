#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1875003087;
unsigned int var_2 = 2485634560U;
unsigned int var_3 = 1887413643U;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)43142;
int zero = 0;
unsigned short var_18 = (unsigned short)26612;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
