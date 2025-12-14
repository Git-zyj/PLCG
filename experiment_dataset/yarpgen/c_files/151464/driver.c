#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 507007766;
signed char var_2 = (signed char)-122;
unsigned short var_3 = (unsigned short)54415;
unsigned long long int var_4 = 3643548608335487496ULL;
signed char var_6 = (signed char)-107;
unsigned int var_11 = 3074148659U;
signed char var_12 = (signed char)51;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 323629673U;
unsigned int var_17 = 3386251359U;
unsigned short var_18 = (unsigned short)51884;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
