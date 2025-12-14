#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2124318909;
unsigned char var_2 = (unsigned char)199;
_Bool var_3 = (_Bool)0;
short var_4 = (short)26157;
unsigned char var_5 = (unsigned char)178;
unsigned short var_6 = (unsigned short)46941;
long long int var_7 = 8773497004628562915LL;
int var_8 = 531353791;
int zero = 0;
unsigned char var_10 = (unsigned char)130;
unsigned long long int var_11 = 11864404898267600148ULL;
signed char var_12 = (signed char)72;
unsigned long long int var_13 = 11173496136433258284ULL;
short var_14 = (short)15639;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
