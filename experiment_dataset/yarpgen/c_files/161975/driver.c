#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18025412489577273730ULL;
unsigned char var_5 = (unsigned char)204;
int var_8 = -1031903757;
short var_9 = (short)1546;
unsigned short var_10 = (unsigned short)47109;
int var_11 = 1948877036;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)57722;
int zero = 0;
short var_14 = (short)23817;
unsigned short var_15 = (unsigned short)63096;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
