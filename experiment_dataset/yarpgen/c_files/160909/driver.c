#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1071748399;
unsigned char var_2 = (unsigned char)119;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3548083754U;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-85;
short var_13 = (short)18649;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
