#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6611561131066819079LL;
unsigned char var_3 = (unsigned char)112;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-81;
unsigned short var_11 = (unsigned short)7339;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)13661;
void init() {
}

void checksum() {
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
