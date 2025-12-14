#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6468098186977087183LL;
int var_4 = -544224874;
unsigned char var_6 = (unsigned char)196;
_Bool var_8 = (_Bool)1;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
unsigned long long int var_16 = 11745597911405880772ULL;
signed char var_17 = (signed char)-71;
unsigned short var_18 = (unsigned short)54900;
int var_19 = -1680367283;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
