#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1691735659;
short var_4 = (short)21036;
unsigned short var_6 = (unsigned short)57655;
unsigned char var_8 = (unsigned char)27;
unsigned long long int var_9 = 2171104687271307192ULL;
signed char var_10 = (signed char)(-127 - 1);
int zero = 0;
unsigned char var_12 = (unsigned char)35;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
