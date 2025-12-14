#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1608489139U;
int var_2 = 1353065799;
int var_3 = -1124422944;
_Bool var_4 = (_Bool)0;
short var_5 = (short)11002;
unsigned long long int var_9 = 15910835461085943849ULL;
short var_10 = (short)-5782;
long long int var_11 = -6045957419254956934LL;
int zero = 0;
unsigned char var_12 = (unsigned char)215;
signed char var_13 = (signed char)-89;
short var_14 = (short)20054;
unsigned int var_15 = 928450416U;
int var_16 = -1871677986;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
