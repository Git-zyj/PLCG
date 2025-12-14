#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7354960908057637524LL;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)31462;
unsigned short var_11 = (unsigned short)24280;
unsigned short var_12 = (unsigned short)9616;
unsigned long long int var_16 = 7278839528883691496ULL;
int var_18 = -1165308946;
unsigned char var_19 = (unsigned char)44;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1548353040U;
void init() {
}

void checksum() {
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
