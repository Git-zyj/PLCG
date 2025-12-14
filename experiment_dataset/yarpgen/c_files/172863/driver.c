#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned char var_5 = (unsigned char)184;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)157;
signed char var_9 = (signed char)23;
signed char var_10 = (signed char)71;
signed char var_13 = (signed char)-110;
int zero = 0;
unsigned short var_16 = (unsigned short)14991;
short var_17 = (short)-6468;
short var_18 = (short)754;
unsigned short var_19 = (unsigned short)37921;
short var_20 = (short)32600;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
