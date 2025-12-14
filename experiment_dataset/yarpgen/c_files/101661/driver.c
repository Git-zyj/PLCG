#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2323193104U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)97;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)61612;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
unsigned char var_21 = (unsigned char)55;
signed char var_22 = (signed char)-8;
void init() {
}

void checksum() {
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
