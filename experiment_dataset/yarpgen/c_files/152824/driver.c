#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -937498961;
int var_1 = 1165311622;
unsigned char var_2 = (unsigned char)185;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3812092205U;
unsigned short var_6 = (unsigned short)3562;
int var_9 = -719205184;
unsigned char var_10 = (unsigned char)128;
long long int var_13 = -665922107335019121LL;
unsigned int var_15 = 2841182767U;
long long int var_16 = -7883343529226821340LL;
int zero = 0;
long long int var_17 = -8798076197636958736LL;
signed char var_18 = (signed char)127;
signed char var_19 = (signed char)-94;
unsigned char var_20 = (unsigned char)69;
unsigned int var_21 = 205052288U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
