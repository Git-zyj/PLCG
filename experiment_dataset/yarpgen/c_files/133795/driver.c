#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)4;
unsigned int var_5 = 1790170211U;
signed char var_7 = (signed char)-93;
short var_10 = (short)-29724;
unsigned short var_11 = (unsigned short)4095;
signed char var_12 = (signed char)58;
int var_17 = 1474999789;
int zero = 0;
signed char var_18 = (signed char)-25;
unsigned long long int var_19 = 18210265710800743249ULL;
signed char var_20 = (signed char)-75;
short var_21 = (short)19637;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
