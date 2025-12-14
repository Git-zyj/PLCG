#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1897;
short var_4 = (short)29947;
unsigned short var_5 = (unsigned short)36985;
int zero = 0;
int var_13 = -1622550771;
unsigned short var_14 = (unsigned short)56980;
unsigned short var_15 = (unsigned short)36533;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
