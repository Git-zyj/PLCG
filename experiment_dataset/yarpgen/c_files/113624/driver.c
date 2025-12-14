#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36602;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)10202;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)19074;
unsigned short var_8 = (unsigned short)52199;
unsigned char var_16 = (unsigned char)182;
int zero = 0;
signed char var_18 = (signed char)37;
unsigned int var_19 = 353132769U;
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
