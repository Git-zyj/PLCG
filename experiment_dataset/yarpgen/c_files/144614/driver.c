#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
long long int var_2 = 7127566774285005097LL;
unsigned int var_3 = 2317277617U;
unsigned short var_5 = (unsigned short)60277;
long long int var_6 = -6531024092219635288LL;
long long int var_7 = -6737529069605255275LL;
long long int var_9 = 5314584124169229879LL;
unsigned short var_10 = (unsigned short)58284;
unsigned int var_11 = 75650145U;
long long int var_12 = -7750757953693950773LL;
unsigned int var_13 = 1445618260U;
unsigned short var_15 = (unsigned short)58579;
unsigned int var_16 = 1424734321U;
long long int var_17 = -7139070325569824628LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)53644;
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
