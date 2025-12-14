#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9100;
unsigned short var_1 = (unsigned short)8132;
unsigned short var_2 = (unsigned short)34585;
short var_8 = (short)-29405;
unsigned short var_10 = (unsigned short)10062;
int zero = 0;
unsigned short var_17 = (unsigned short)42809;
short var_18 = (short)-5597;
short var_19 = (short)8770;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
