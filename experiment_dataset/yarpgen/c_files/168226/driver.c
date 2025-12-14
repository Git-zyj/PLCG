#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2179414253U;
unsigned char var_2 = (unsigned char)13;
signed char var_5 = (signed char)62;
signed char var_17 = (signed char)-58;
short var_18 = (short)-20283;
int zero = 0;
signed char var_19 = (signed char)50;
_Bool var_20 = (_Bool)1;
int var_21 = 393572312;
short var_22 = (short)7549;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
