#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21091;
short var_3 = (short)-1794;
unsigned short var_4 = (unsigned short)55270;
long long int var_6 = -5743451473891362749LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)25663;
unsigned int var_9 = 3444348587U;
int zero = 0;
unsigned short var_12 = (unsigned short)25000;
unsigned short var_13 = (unsigned short)15563;
unsigned int var_14 = 1554039610U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
