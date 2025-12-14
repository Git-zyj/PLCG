#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
short var_3 = (short)-19495;
unsigned int var_4 = 1097064198U;
unsigned char var_13 = (unsigned char)30;
long long int var_15 = 4736556007666943502LL;
int zero = 0;
unsigned long long int var_20 = 17534595789424698488ULL;
long long int var_21 = -3851016229231525764LL;
short var_22 = (short)5335;
short var_23 = (short)23894;
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
