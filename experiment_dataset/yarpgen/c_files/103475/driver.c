#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned long long int var_2 = 5472459150060771116ULL;
unsigned long long int var_3 = 16104020494338394993ULL;
short var_7 = (short)-3557;
short var_8 = (short)27586;
unsigned char var_13 = (unsigned char)80;
short var_15 = (short)7127;
int zero = 0;
signed char var_17 = (signed char)73;
unsigned char var_18 = (unsigned char)77;
signed char var_19 = (signed char)76;
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
