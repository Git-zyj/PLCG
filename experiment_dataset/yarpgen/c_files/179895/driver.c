#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
int var_6 = 1175290184;
short var_8 = (short)-12147;
int var_17 = 1130408224;
short var_18 = (short)4469;
int zero = 0;
short var_19 = (short)20187;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)194;
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
