#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43685;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4136896580U;
short var_9 = (short)-11687;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-100;
int zero = 0;
short var_14 = (short)-6373;
short var_15 = (short)-16033;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14841405331031603528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
