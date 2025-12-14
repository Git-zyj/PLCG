#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
_Bool var_1 = (_Bool)0;
int var_2 = -1266403519;
unsigned int var_5 = 1370211987U;
int var_6 = 244776773;
unsigned char var_7 = (unsigned char)247;
long long int var_8 = 2184382856327364050LL;
unsigned int var_9 = 3307931547U;
unsigned int var_10 = 533843407U;
long long int var_11 = -4590095561057197310LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)98;
short var_14 = (short)15665;
unsigned short var_15 = (unsigned short)9651;
unsigned short var_16 = (unsigned short)27214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
