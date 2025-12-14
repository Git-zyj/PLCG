#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-15814;
int var_4 = -1657102051;
long long int var_5 = 4958993729955172731LL;
unsigned long long int var_6 = 4448400605397799562ULL;
unsigned char var_10 = (unsigned char)1;
unsigned int var_11 = 2109384310U;
int zero = 0;
short var_12 = (short)22584;
unsigned short var_13 = (unsigned short)35890;
short var_14 = (short)-5970;
void init() {
}

void checksum() {
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
