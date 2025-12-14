#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
signed char var_2 = (signed char)-70;
signed char var_3 = (signed char)-60;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)224;
signed char var_11 = (signed char)-32;
unsigned char var_12 = (unsigned char)204;
int zero = 0;
signed char var_13 = (signed char)127;
unsigned char var_14 = (unsigned char)177;
unsigned char var_15 = (unsigned char)111;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
