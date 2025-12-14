#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)7;
unsigned int var_3 = 2294711466U;
unsigned long long int var_6 = 9043548238280583908ULL;
signed char var_7 = (signed char)-117;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 571788337U;
unsigned short var_12 = (unsigned short)32119;
int zero = 0;
unsigned int var_19 = 991361542U;
unsigned int var_20 = 405482769U;
signed char var_21 = (signed char)64;
int var_22 = -901343329;
unsigned char var_23 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
