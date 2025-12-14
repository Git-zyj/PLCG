#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned int var_10 = 2995466109U;
signed char var_14 = (signed char)-44;
signed char var_17 = (signed char)-78;
unsigned int var_18 = 3952108679U;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
unsigned int var_20 = 2630123843U;
_Bool var_21 = (_Bool)0;
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
