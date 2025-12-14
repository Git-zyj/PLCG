#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36460;
_Bool var_7 = (_Bool)0;
unsigned short var_14 = (unsigned short)28154;
unsigned char var_15 = (unsigned char)211;
unsigned short var_18 = (unsigned short)52802;
int zero = 0;
unsigned short var_19 = (unsigned short)52496;
unsigned char var_20 = (unsigned char)186;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2143359412U;
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
