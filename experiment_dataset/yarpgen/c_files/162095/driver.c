#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 61268588U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)50314;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)42;
unsigned char var_10 = (unsigned char)206;
unsigned int var_14 = 184899243U;
int var_15 = -111016034;
unsigned int var_16 = 200689378U;
int zero = 0;
signed char var_17 = (signed char)52;
unsigned char var_18 = (unsigned char)110;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
