#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)32;
unsigned long long int var_11 = 5265075445805555581ULL;
short var_12 = (short)11015;
int zero = 0;
unsigned short var_15 = (unsigned short)5074;
signed char var_16 = (signed char)62;
unsigned int var_17 = 637681898U;
int var_18 = -742791868;
unsigned int var_19 = 4238062657U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
