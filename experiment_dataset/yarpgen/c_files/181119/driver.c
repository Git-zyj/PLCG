#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3917485224U;
unsigned char var_5 = (unsigned char)166;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)254;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-86;
unsigned char var_13 = (unsigned char)197;
unsigned short var_14 = (unsigned short)27956;
void init() {
}

void checksum() {
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
