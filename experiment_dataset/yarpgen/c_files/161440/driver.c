#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 809301660U;
signed char var_2 = (signed char)-84;
unsigned char var_3 = (unsigned char)60;
int var_4 = 167231988;
unsigned short var_5 = (unsigned short)37629;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)10864;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 7507387395983268953ULL;
int zero = 0;
short var_12 = (short)13809;
unsigned short var_13 = (unsigned short)17146;
unsigned long long int var_14 = 4058698646106388605ULL;
unsigned int var_15 = 1298141717U;
unsigned short var_16 = (unsigned short)40534;
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
