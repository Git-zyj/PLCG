#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned long long int var_1 = 17591698162588809154ULL;
unsigned char var_2 = (unsigned char)212;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-25;
int var_6 = -241754148;
signed char var_8 = (signed char)-5;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)224;
unsigned char var_14 = (unsigned char)176;
signed char var_16 = (signed char)-64;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-127;
int var_20 = -534178911;
unsigned char var_21 = (unsigned char)12;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
