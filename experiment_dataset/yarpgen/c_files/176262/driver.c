#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
signed char var_3 = (signed char)118;
unsigned char var_4 = (unsigned char)226;
int var_5 = 2078006980;
short var_6 = (short)8897;
short var_11 = (short)23263;
int zero = 0;
unsigned long long int var_13 = 14081557426458283919ULL;
signed char var_14 = (signed char)-99;
unsigned char var_15 = (unsigned char)19;
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
