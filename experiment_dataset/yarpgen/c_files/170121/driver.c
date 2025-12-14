#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-69;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 36395026U;
unsigned int var_8 = 2121941456U;
int zero = 0;
unsigned int var_13 = 169172512U;
int var_14 = 1611178782;
long long int var_15 = 2006261703218444244LL;
signed char var_16 = (signed char)91;
short var_17 = (short)23013;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
