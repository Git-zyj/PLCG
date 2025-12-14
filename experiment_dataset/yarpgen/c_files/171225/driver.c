#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4605;
unsigned char var_3 = (unsigned char)150;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4339259838743879461LL;
unsigned short var_10 = (unsigned short)44702;
int zero = 0;
long long int var_12 = -8000506274195799141LL;
unsigned char var_13 = (unsigned char)127;
unsigned short var_14 = (unsigned short)7501;
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
