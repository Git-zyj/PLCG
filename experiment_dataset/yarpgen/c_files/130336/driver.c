#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-46;
unsigned char var_9 = (unsigned char)179;
unsigned long long int var_17 = 7291313913713342886ULL;
unsigned char var_18 = (unsigned char)2;
short var_19 = (short)-2914;
int zero = 0;
unsigned char var_20 = (unsigned char)224;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1052686048635962060LL;
unsigned int var_23 = 1611239089U;
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
