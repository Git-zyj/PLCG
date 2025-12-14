#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
signed char var_3 = (signed char)120;
short var_4 = (short)-9040;
unsigned short var_6 = (unsigned short)65000;
unsigned char var_8 = (unsigned char)136;
int zero = 0;
short var_11 = (short)-13499;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16336236487892919169ULL;
int var_14 = 1026146727;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
