#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1075357239;
unsigned int var_2 = 3013988200U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-19;
unsigned char var_13 = (unsigned char)125;
signed char var_18 = (signed char)49;
int zero = 0;
int var_19 = -445114264;
signed char var_20 = (signed char)119;
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
