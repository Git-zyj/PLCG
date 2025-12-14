#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19738;
long long int var_4 = -591788120635195004LL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)60;
int var_8 = -1858148074;
unsigned char var_9 = (unsigned char)128;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3938744556U;
_Bool var_13 = (_Bool)0;
int var_14 = 732481181;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
