#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40466;
signed char var_2 = (signed char)-95;
unsigned short var_5 = (unsigned short)5542;
long long int var_6 = 3484343762777959544LL;
long long int var_7 = -9113875859318088746LL;
short var_11 = (short)-20899;
int zero = 0;
unsigned int var_16 = 2696317887U;
unsigned long long int var_17 = 16088638806255800657ULL;
unsigned short var_18 = (unsigned short)61670;
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
