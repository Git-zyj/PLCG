#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13588554904389274505ULL;
signed char var_3 = (signed char)98;
unsigned short var_5 = (unsigned short)27609;
unsigned short var_6 = (unsigned short)44081;
signed char var_7 = (signed char)-18;
unsigned short var_9 = (unsigned short)25972;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)30;
int zero = 0;
unsigned short var_20 = (unsigned short)62038;
unsigned short var_21 = (unsigned short)34979;
unsigned short var_22 = (unsigned short)51201;
unsigned short var_23 = (unsigned short)9790;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
