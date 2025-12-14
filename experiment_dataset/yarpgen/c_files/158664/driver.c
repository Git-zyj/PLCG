#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1645653752;
unsigned short var_2 = (unsigned short)64783;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)224;
unsigned int var_6 = 1701049993U;
long long int var_8 = 4484099707139080624LL;
int zero = 0;
signed char var_10 = (signed char)-57;
signed char var_11 = (signed char)-106;
unsigned int var_12 = 1775759851U;
unsigned char var_13 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
