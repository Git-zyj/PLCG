#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
unsigned short var_5 = (unsigned short)26774;
unsigned long long int var_13 = 1637699197547041911ULL;
short var_14 = (short)25711;
unsigned short var_18 = (unsigned short)60984;
int zero = 0;
short var_19 = (short)-27507;
unsigned char var_20 = (unsigned char)141;
unsigned long long int var_21 = 1366620221610698553ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
