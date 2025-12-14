#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5524554772389361258LL;
signed char var_2 = (signed char)-67;
unsigned char var_5 = (unsigned char)206;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
unsigned char var_10 = (unsigned char)129;
unsigned int var_11 = 3057596694U;
long long int var_12 = -3589517770858126928LL;
unsigned char var_13 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
