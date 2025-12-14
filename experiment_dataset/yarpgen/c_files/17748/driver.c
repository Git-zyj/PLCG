#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 821942816U;
unsigned long long int var_3 = 3868198349169090250ULL;
unsigned short var_5 = (unsigned short)8162;
short var_7 = (short)-19362;
unsigned long long int var_8 = 9366515827647113316ULL;
unsigned int var_12 = 1032240154U;
unsigned short var_13 = (unsigned short)21636;
int zero = 0;
short var_14 = (short)3076;
signed char var_15 = (signed char)-7;
unsigned short var_16 = (unsigned short)9639;
short var_17 = (short)-9800;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
