#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -73609419;
unsigned char var_7 = (unsigned char)168;
signed char var_8 = (signed char)-60;
short var_11 = (short)4080;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
signed char var_17 = (signed char)4;
signed char var_18 = (signed char)-102;
unsigned short var_19 = (unsigned short)14107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
