#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
int var_4 = -116198738;
unsigned short var_9 = (unsigned short)11488;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-71;
signed char var_15 = (signed char)97;
unsigned short var_16 = (unsigned short)51445;
signed char var_17 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
