#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
signed char var_2 = (signed char)-19;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2502828962U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)3;
long long int var_11 = -6474648733746348236LL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)38499;
int zero = 0;
int var_15 = 1224368664;
unsigned int var_16 = 2503834691U;
unsigned short var_17 = (unsigned short)64691;
void init() {
}

void checksum() {
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
