#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52777;
unsigned char var_5 = (unsigned char)52;
unsigned short var_8 = (unsigned short)61236;
unsigned char var_11 = (unsigned char)151;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)5;
int zero = 0;
unsigned char var_19 = (unsigned char)145;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)16281;
unsigned short var_22 = (unsigned short)8402;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
