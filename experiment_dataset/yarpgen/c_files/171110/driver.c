#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10438;
unsigned int var_8 = 2772337266U;
signed char var_15 = (signed char)91;
unsigned int var_16 = 764534292U;
unsigned long long int var_18 = 139394975753564061ULL;
int zero = 0;
unsigned int var_19 = 957232838U;
unsigned short var_20 = (unsigned short)31546;
unsigned char var_21 = (unsigned char)27;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
