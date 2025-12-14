#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
unsigned char var_4 = (unsigned char)196;
unsigned char var_8 = (unsigned char)184;
unsigned short var_10 = (unsigned short)46246;
long long int var_11 = 6095868539766798747LL;
signed char var_12 = (signed char)-127;
int zero = 0;
signed char var_18 = (signed char)-100;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
