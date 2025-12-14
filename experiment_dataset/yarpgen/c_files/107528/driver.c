#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1568764250;
int var_4 = 692438678;
unsigned int var_6 = 3702448692U;
unsigned short var_7 = (unsigned short)46869;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2743845288U;
unsigned int var_15 = 4108629223U;
int var_19 = -188799025;
int zero = 0;
signed char var_20 = (signed char)-10;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)16;
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
