#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17501;
short var_3 = (short)-6583;
_Bool var_4 = (_Bool)0;
short var_6 = (short)21105;
unsigned int var_9 = 3676331056U;
unsigned short var_12 = (unsigned short)46749;
unsigned char var_17 = (unsigned char)217;
int var_19 = -1069772319;
int zero = 0;
long long int var_20 = 130567388963263445LL;
long long int var_21 = 3192252103166454799LL;
unsigned short var_22 = (unsigned short)38798;
void init() {
}

void checksum() {
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
