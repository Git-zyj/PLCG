#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-5099;
unsigned char var_6 = (unsigned char)18;
short var_7 = (short)25179;
unsigned short var_8 = (unsigned short)56712;
int zero = 0;
unsigned short var_11 = (unsigned short)51702;
int var_12 = 1122721946;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
