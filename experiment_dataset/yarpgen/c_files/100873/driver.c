#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)109;
unsigned char var_4 = (unsigned char)35;
unsigned short var_6 = (unsigned short)38849;
signed char var_8 = (signed char)-66;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
short var_13 = (short)-346;
unsigned long long int var_14 = 7125703071788438547ULL;
unsigned long long int var_15 = 16238149790148395132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
