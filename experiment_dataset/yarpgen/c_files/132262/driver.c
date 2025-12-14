#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1858638555;
unsigned char var_1 = (unsigned char)197;
unsigned int var_3 = 937168972U;
unsigned short var_8 = (unsigned short)55704;
signed char var_9 = (signed char)-82;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)190;
unsigned short var_14 = (unsigned short)28036;
int var_15 = 817629531;
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
