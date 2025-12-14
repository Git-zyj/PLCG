#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3813355771785517490LL;
short var_5 = (short)20744;
unsigned short var_6 = (unsigned short)43847;
unsigned int var_8 = 3006045162U;
unsigned char var_9 = (unsigned char)243;
unsigned int var_11 = 3229850301U;
int var_12 = -82467746;
unsigned int var_13 = 723991013U;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
unsigned char var_16 = (unsigned char)246;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
