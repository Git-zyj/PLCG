#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2113600994;
signed char var_5 = (signed char)-39;
signed char var_6 = (signed char)116;
int var_11 = 102401140;
int zero = 0;
unsigned short var_18 = (unsigned short)30743;
unsigned int var_19 = 454879678U;
unsigned int var_20 = 321880679U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
