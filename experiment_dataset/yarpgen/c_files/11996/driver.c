#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55988;
unsigned char var_7 = (unsigned char)194;
unsigned short var_10 = (unsigned short)45621;
int var_13 = 1009600555;
unsigned short var_15 = (unsigned short)46207;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)42092;
short var_20 = (short)-24109;
signed char var_21 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
