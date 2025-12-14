#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)156;
unsigned char var_4 = (unsigned char)152;
unsigned char var_6 = (unsigned char)254;
unsigned long long int var_10 = 15089061636582376181ULL;
int var_11 = -413001598;
unsigned char var_12 = (unsigned char)134;
unsigned long long int var_14 = 3784099731704392856ULL;
int var_15 = 1885786955;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
long long int var_17 = -4674855797865506319LL;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
