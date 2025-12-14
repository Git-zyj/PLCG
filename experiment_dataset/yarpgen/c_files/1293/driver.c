#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1125029256;
long long int var_1 = 6431916276440745210LL;
long long int var_3 = -3449728861741639534LL;
unsigned char var_4 = (unsigned char)113;
unsigned long long int var_5 = 16904313168750907132ULL;
unsigned short var_7 = (unsigned short)58029;
_Bool var_8 = (_Bool)1;
int var_10 = 518366451;
short var_16 = (short)7681;
int zero = 0;
unsigned char var_18 = (unsigned char)237;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)7193;
signed char var_21 = (signed char)-12;
void init() {
}

void checksum() {
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
