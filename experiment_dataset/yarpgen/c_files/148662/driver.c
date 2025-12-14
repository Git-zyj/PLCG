#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
short var_3 = (short)-29300;
signed char var_10 = (signed char)-69;
short var_12 = (short)-7757;
unsigned int var_16 = 3483679086U;
int var_18 = -531159514;
signed char var_19 = (signed char)2;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
unsigned short var_21 = (unsigned short)58476;
_Bool var_22 = (_Bool)0;
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
