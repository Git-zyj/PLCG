#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35582;
short var_3 = (short)29534;
unsigned short var_4 = (unsigned short)11111;
unsigned char var_5 = (unsigned char)223;
unsigned short var_7 = (unsigned short)13673;
unsigned int var_8 = 3178117029U;
unsigned short var_10 = (unsigned short)13129;
int var_11 = -697942678;
unsigned int var_14 = 794983929U;
unsigned int var_15 = 1047119717U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)11567;
int var_21 = 239756380;
unsigned short var_22 = (unsigned short)14407;
unsigned int var_23 = 4182877142U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
