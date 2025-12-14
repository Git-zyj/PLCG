#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14604;
_Bool var_3 = (_Bool)1;
short var_8 = (short)-10040;
unsigned char var_10 = (unsigned char)74;
short var_11 = (short)6035;
int zero = 0;
unsigned long long int var_13 = 7742747290081197302ULL;
unsigned short var_14 = (unsigned short)59704;
short var_15 = (short)-28476;
unsigned int var_16 = 705931391U;
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
