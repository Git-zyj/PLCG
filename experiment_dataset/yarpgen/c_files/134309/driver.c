#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22239;
unsigned short var_3 = (unsigned short)14736;
unsigned int var_6 = 1092697267U;
unsigned char var_8 = (unsigned char)180;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
unsigned int var_20 = 1603052142U;
signed char var_21 = (signed char)96;
signed char var_22 = (signed char)-94;
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
