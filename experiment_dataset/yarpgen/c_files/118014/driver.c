#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)33183;
unsigned int var_15 = 1575047458U;
unsigned int var_16 = 1081667519U;
unsigned int var_17 = 2372485440U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)61945;
unsigned int var_22 = 2556860049U;
int var_23 = 1363036629;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
