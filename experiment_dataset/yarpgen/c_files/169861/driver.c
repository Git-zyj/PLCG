#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30105;
signed char var_3 = (signed char)-125;
short var_4 = (short)25963;
unsigned short var_5 = (unsigned short)54125;
short var_6 = (short)-30652;
signed char var_10 = (signed char)-116;
int zero = 0;
unsigned short var_12 = (unsigned short)10999;
unsigned short var_13 = (unsigned short)62260;
unsigned short var_14 = (unsigned short)9409;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
