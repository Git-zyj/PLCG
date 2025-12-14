#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)126;
unsigned short var_9 = (unsigned short)32918;
unsigned char var_12 = (unsigned char)202;
int zero = 0;
long long int var_17 = 7467640065879236368LL;
int var_18 = -929762261;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-20047;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
