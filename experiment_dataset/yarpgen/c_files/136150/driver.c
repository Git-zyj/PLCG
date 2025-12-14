#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16490;
unsigned int var_6 = 585149017U;
unsigned char var_7 = (unsigned char)133;
long long int var_8 = -2120247008651216057LL;
signed char var_9 = (signed char)-79;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1656581037;
unsigned short var_14 = (unsigned short)9402;
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
