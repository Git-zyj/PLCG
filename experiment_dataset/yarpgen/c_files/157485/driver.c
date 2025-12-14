#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
signed char var_3 = (signed char)-38;
unsigned char var_5 = (unsigned char)46;
unsigned short var_6 = (unsigned short)14062;
signed char var_8 = (signed char)-64;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)2;
signed char var_12 = (signed char)-17;
unsigned char var_13 = (unsigned char)166;
int var_14 = -1886674807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
