#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7506443236636949600LL;
signed char var_2 = (signed char)-21;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1458042143266429584LL;
long long int var_6 = 3046873326380347153LL;
unsigned int var_7 = 4104395055U;
int zero = 0;
signed char var_14 = (signed char)-58;
signed char var_15 = (signed char)-92;
short var_16 = (short)-29920;
unsigned char var_17 = (unsigned char)78;
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
