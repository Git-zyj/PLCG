#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
signed char var_5 = (signed char)-8;
short var_7 = (short)28496;
int var_9 = -1362652602;
long long int var_10 = -121105078055649170LL;
unsigned short var_13 = (unsigned short)63645;
int zero = 0;
signed char var_14 = (signed char)110;
unsigned short var_15 = (unsigned short)4563;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
