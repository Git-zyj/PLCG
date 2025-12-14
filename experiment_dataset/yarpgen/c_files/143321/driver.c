#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)5;
signed char var_5 = (signed char)106;
unsigned short var_6 = (unsigned short)37006;
unsigned short var_11 = (unsigned short)42627;
int zero = 0;
unsigned short var_15 = (unsigned short)20637;
unsigned short var_16 = (unsigned short)18689;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
