#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1931256491;
_Bool var_3 = (_Bool)1;
int var_4 = -1096223018;
unsigned char var_6 = (unsigned char)242;
_Bool var_9 = (_Bool)0;
int var_10 = 398260904;
short var_11 = (short)14318;
int zero = 0;
short var_14 = (short)27891;
_Bool var_15 = (_Bool)0;
int var_16 = -1578771171;
void init() {
}

void checksum() {
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
