#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1119103469U;
unsigned int var_2 = 1072111462U;
int var_3 = 849797308;
unsigned int var_6 = 4160327478U;
unsigned short var_7 = (unsigned short)12087;
unsigned short var_8 = (unsigned short)6489;
int var_9 = 754385768;
unsigned int var_10 = 4085430615U;
unsigned int var_11 = 1023971020U;
unsigned int var_12 = 1652935176U;
unsigned int var_13 = 2374496912U;
int var_16 = -2035254985;
int zero = 0;
_Bool var_18 = (_Bool)0;
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
