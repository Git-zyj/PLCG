#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned int var_2 = 2384693807U;
signed char var_5 = (signed char)-74;
short var_7 = (short)-5466;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)53;
unsigned int var_12 = 778242088U;
int zero = 0;
signed char var_15 = (signed char)87;
unsigned int var_16 = 4281182894U;
signed char var_17 = (signed char)-31;
unsigned char var_18 = (unsigned char)124;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
