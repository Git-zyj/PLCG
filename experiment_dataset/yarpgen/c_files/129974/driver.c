#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29576;
long long int var_4 = 8109757638238422308LL;
_Bool var_5 = (_Bool)1;
int var_7 = -1611993706;
long long int var_8 = -4385123760577054778LL;
int var_10 = 864562297;
unsigned char var_11 = (unsigned char)150;
unsigned short var_12 = (unsigned short)54358;
int var_13 = -1201946650;
int zero = 0;
long long int var_14 = 4816961508089500429LL;
unsigned char var_15 = (unsigned char)29;
unsigned char var_16 = (unsigned char)81;
void init() {
}

void checksum() {
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
