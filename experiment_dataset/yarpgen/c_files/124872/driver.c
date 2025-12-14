#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36341;
unsigned char var_3 = (unsigned char)76;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 2794108315U;
int zero = 0;
short var_13 = (short)-29741;
unsigned short var_14 = (unsigned short)38081;
unsigned long long int var_15 = 10158709201549539089ULL;
long long int var_16 = 140276891996824216LL;
void init() {
}

void checksum() {
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
