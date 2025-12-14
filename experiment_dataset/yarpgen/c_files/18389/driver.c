#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 680194997;
signed char var_3 = (signed char)36;
unsigned short var_4 = (unsigned short)39680;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)28003;
unsigned char var_21 = (unsigned char)186;
unsigned char var_22 = (unsigned char)23;
int var_23 = -2004071999;
void init() {
}

void checksum() {
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
