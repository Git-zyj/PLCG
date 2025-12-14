#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
int var_2 = 1175527182;
signed char var_6 = (signed char)-69;
signed char var_8 = (signed char)46;
unsigned char var_9 = (unsigned char)22;
int zero = 0;
signed char var_10 = (signed char)6;
_Bool var_11 = (_Bool)1;
int var_12 = -2014763970;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
