#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6520013606653388239ULL;
unsigned short var_3 = (unsigned short)39457;
unsigned int var_5 = 1059638203U;
_Bool var_7 = (_Bool)0;
int var_8 = -750825428;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)59379;
unsigned short var_19 = (unsigned short)27055;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3390361354U;
unsigned char var_22 = (unsigned char)44;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
