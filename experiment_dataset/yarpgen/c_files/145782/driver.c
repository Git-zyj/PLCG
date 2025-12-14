#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)60;
unsigned char var_12 = (unsigned char)12;
short var_17 = (short)-1935;
int zero = 0;
signed char var_18 = (signed char)85;
unsigned short var_19 = (unsigned short)5027;
int var_20 = -1054489013;
signed char var_21 = (signed char)-51;
int var_22 = 340311264;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
