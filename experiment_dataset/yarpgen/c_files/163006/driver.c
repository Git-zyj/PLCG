#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6406023968664708634ULL;
int var_3 = -1377041512;
unsigned int var_4 = 915907564U;
signed char var_9 = (signed char)-101;
short var_11 = (short)27654;
int zero = 0;
unsigned long long int var_12 = 13833083482894985609ULL;
signed char var_13 = (signed char)-11;
signed char var_14 = (signed char)-11;
short var_15 = (short)-9443;
_Bool var_16 = (_Bool)0;
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
