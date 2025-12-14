#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_6 = (signed char)-111;
unsigned char var_7 = (unsigned char)121;
unsigned int var_10 = 3440016440U;
int zero = 0;
int var_12 = 1438262184;
int var_13 = -363040532;
unsigned short var_14 = (unsigned short)34044;
signed char var_15 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
