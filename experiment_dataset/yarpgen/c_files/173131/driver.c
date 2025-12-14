#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2012304965U;
unsigned char var_6 = (unsigned char)212;
unsigned short var_12 = (unsigned short)13150;
int var_13 = 703603294;
short var_18 = (short)-9313;
int zero = 0;
unsigned short var_19 = (unsigned short)23595;
short var_20 = (short)7414;
int var_21 = 79221622;
void init() {
}

void checksum() {
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
