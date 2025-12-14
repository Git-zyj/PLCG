#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_13 = -2127925256;
int zero = 0;
int var_19 = -684530513;
unsigned char var_20 = (unsigned char)30;
int var_21 = 1470102180;
void init() {
}

void checksum() {
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
