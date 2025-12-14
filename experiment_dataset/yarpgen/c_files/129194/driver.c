#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1310620022385448849LL;
signed char var_3 = (signed char)-99;
short var_4 = (short)-4930;
short var_5 = (short)8479;
int var_6 = 1018944075;
signed char var_7 = (signed char)40;
unsigned int var_8 = 2455390202U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3023084290U;
short var_14 = (short)14394;
unsigned short var_15 = (unsigned short)24611;
unsigned char var_16 = (unsigned char)40;
unsigned int var_17 = 3619205336U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
