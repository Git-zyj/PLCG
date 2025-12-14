#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-73;
signed char var_3 = (signed char)-73;
unsigned short var_4 = (unsigned short)54921;
unsigned short var_7 = (unsigned short)55704;
signed char var_8 = (signed char)69;
unsigned char var_9 = (unsigned char)0;
unsigned int var_10 = 3699123065U;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -4593097471184937093LL;
long long int var_15 = -1992153921546193429LL;
void init() {
}

void checksum() {
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
