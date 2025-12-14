#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20356;
signed char var_3 = (signed char)-90;
unsigned int var_4 = 2665909345U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)27688;
int zero = 0;
int var_15 = -952172491;
int var_16 = 223753728;
unsigned char var_17 = (unsigned char)154;
unsigned char var_18 = (unsigned char)20;
unsigned long long int var_19 = 13340319616407763260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
