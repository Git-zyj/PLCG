#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-119;
unsigned short var_7 = (unsigned short)1924;
signed char var_8 = (signed char)-49;
unsigned short var_9 = (unsigned short)64354;
signed char var_10 = (signed char)28;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-82;
unsigned short var_20 = (unsigned short)36602;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
