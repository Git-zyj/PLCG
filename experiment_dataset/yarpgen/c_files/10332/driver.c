#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
signed char var_1 = (signed char)14;
unsigned int var_2 = 1405042691U;
signed char var_4 = (signed char)-124;
signed char var_5 = (signed char)-102;
unsigned int var_6 = 1710923204U;
short var_16 = (short)-19362;
int zero = 0;
unsigned short var_20 = (unsigned short)15241;
unsigned char var_21 = (unsigned char)168;
unsigned long long int var_22 = 13368449997442806206ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
