#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5682;
unsigned short var_6 = (unsigned short)58029;
_Bool var_8 = (_Bool)1;
short var_12 = (short)14453;
unsigned short var_13 = (unsigned short)17633;
int zero = 0;
short var_14 = (short)18847;
short var_15 = (short)-5344;
signed char var_16 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
