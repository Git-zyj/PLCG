#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5587;
unsigned char var_7 = (unsigned char)44;
unsigned long long int var_8 = 7344519846170908690ULL;
int var_14 = -1397423810;
int zero = 0;
short var_15 = (short)17925;
unsigned char var_16 = (unsigned char)219;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1338873499506925221LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
