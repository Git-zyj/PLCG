#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -258426490097369167LL;
unsigned long long int var_3 = 4962234645611196646ULL;
long long int var_4 = 3230841177567030243LL;
unsigned char var_5 = (unsigned char)8;
unsigned short var_10 = (unsigned short)15056;
_Bool var_11 = (_Bool)0;
long long int var_14 = -6740080963855575692LL;
unsigned long long int var_15 = 2499570280577062185ULL;
unsigned short var_16 = (unsigned short)15890;
short var_17 = (short)11613;
int var_19 = -2119093349;
int zero = 0;
unsigned char var_20 = (unsigned char)120;
unsigned short var_21 = (unsigned short)3060;
unsigned short var_22 = (unsigned short)13978;
int var_23 = -943774024;
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
