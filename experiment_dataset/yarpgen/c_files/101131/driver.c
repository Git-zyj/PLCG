#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 617744691U;
short var_8 = (short)24257;
signed char var_9 = (signed char)-25;
long long int var_11 = -6551903283426296132LL;
long long int var_13 = 2278005899042350310LL;
unsigned char var_15 = (unsigned char)233;
int zero = 0;
long long int var_16 = 4419116684441003630LL;
signed char var_17 = (signed char)91;
int var_18 = -1549479826;
signed char var_19 = (signed char)-19;
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
