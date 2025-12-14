#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1308212729U;
long long int var_1 = -4862317533986521450LL;
unsigned int var_2 = 2984616854U;
unsigned char var_3 = (unsigned char)189;
unsigned char var_4 = (unsigned char)97;
unsigned int var_5 = 4208783260U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)5064;
int zero = 0;
long long int var_11 = -7842710195246128923LL;
short var_12 = (short)-15025;
long long int var_13 = -5224174924175731475LL;
signed char var_14 = (signed char)105;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
