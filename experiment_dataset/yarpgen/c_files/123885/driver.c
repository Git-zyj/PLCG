#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
long long int var_4 = 4825397054108227057LL;
long long int var_6 = -5213976252592781040LL;
int var_7 = -1249431771;
int var_9 = -2138215527;
int zero = 0;
long long int var_16 = -6012510427210488988LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)27219;
void init() {
}

void checksum() {
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
