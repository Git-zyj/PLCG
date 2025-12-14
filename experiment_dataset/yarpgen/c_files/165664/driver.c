#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned short var_1 = (unsigned short)2779;
unsigned short var_2 = (unsigned short)15189;
long long int var_3 = -6674552367948952335LL;
int var_4 = 950516537;
short var_5 = (short)1;
unsigned char var_6 = (unsigned char)220;
_Bool var_7 = (_Bool)0;
int var_8 = -1516622012;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
long long int var_11 = -1907147193127786051LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)21505;
_Bool var_14 = (_Bool)0;
short var_15 = (short)9372;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
