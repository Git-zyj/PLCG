#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)135;
short var_3 = (short)26478;
short var_6 = (short)-28201;
_Bool var_8 = (_Bool)1;
long long int var_10 = 2282699468100852243LL;
int var_18 = -710168169;
int zero = 0;
short var_19 = (short)-20514;
unsigned char var_20 = (unsigned char)105;
unsigned short var_21 = (unsigned short)56918;
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
