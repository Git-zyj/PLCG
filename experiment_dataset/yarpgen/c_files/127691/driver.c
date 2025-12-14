#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
long long int var_1 = -5771070036624351825LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)594;
signed char var_5 = (signed char)70;
unsigned long long int var_9 = 1545121230984555098ULL;
unsigned long long int var_10 = 14831134914985450940ULL;
short var_12 = (short)-15251;
unsigned short var_13 = (unsigned short)42801;
int zero = 0;
unsigned short var_16 = (unsigned short)39779;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)7;
short var_19 = (short)-6723;
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
