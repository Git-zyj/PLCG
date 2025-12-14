#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4583357461297319897ULL;
short var_5 = (short)-11814;
unsigned int var_6 = 2300287232U;
int var_11 = 433179428;
int zero = 0;
int var_13 = -310204014;
unsigned char var_14 = (unsigned char)30;
signed char var_15 = (signed char)-48;
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
