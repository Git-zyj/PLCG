#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
signed char var_2 = (signed char)90;
int var_5 = -1415346808;
int var_6 = -1255892352;
int zero = 0;
short var_20 = (short)19655;
signed char var_21 = (signed char)-83;
unsigned char var_22 = (unsigned char)140;
signed char var_23 = (signed char)-87;
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
