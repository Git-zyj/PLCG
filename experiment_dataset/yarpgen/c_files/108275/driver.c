#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1960962967;
int var_3 = 1251410511;
long long int var_4 = -5884028779411424282LL;
unsigned int var_5 = 4151096177U;
_Bool var_6 = (_Bool)0;
int var_8 = 1402751434;
long long int var_12 = 8144556013896274346LL;
signed char var_13 = (signed char)-104;
unsigned char var_19 = (unsigned char)209;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-76;
unsigned char var_22 = (unsigned char)229;
unsigned int var_23 = 4154354724U;
int var_24 = 409692167;
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
