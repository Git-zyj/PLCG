#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4844178993755742727LL;
unsigned int var_3 = 32620928U;
unsigned short var_4 = (unsigned short)29036;
signed char var_6 = (signed char)-1;
int zero = 0;
int var_13 = 1388392987;
int var_14 = 661434125;
int var_15 = -1188603434;
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
