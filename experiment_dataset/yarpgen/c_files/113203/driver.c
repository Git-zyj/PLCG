#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1701457251U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3453951756U;
unsigned short var_6 = (unsigned short)498;
unsigned short var_8 = (unsigned short)55495;
unsigned short var_10 = (unsigned short)31067;
unsigned short var_14 = (unsigned short)57994;
unsigned long long int var_16 = 1708657351465084109ULL;
unsigned long long int var_18 = 9340578713232807898ULL;
int zero = 0;
short var_19 = (short)-24895;
short var_20 = (short)1130;
short var_21 = (short)-15518;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
