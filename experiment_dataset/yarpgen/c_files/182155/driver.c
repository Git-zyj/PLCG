#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16273;
short var_1 = (short)20570;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_8 = 6821255457877074083ULL;
unsigned short var_11 = (unsigned short)18501;
long long int var_12 = -7087331721440546177LL;
int zero = 0;
int var_13 = -1396432242;
signed char var_14 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
