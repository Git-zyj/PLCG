#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-29851;
signed char var_2 = (signed char)-68;
short var_5 = (short)780;
unsigned short var_6 = (unsigned short)37457;
unsigned short var_8 = (unsigned short)8447;
unsigned short var_10 = (unsigned short)18509;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)161;
unsigned int var_13 = 855512968U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-11541;
unsigned short var_16 = (unsigned short)27074;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
