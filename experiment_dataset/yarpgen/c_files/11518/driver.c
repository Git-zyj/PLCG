#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_2 = (signed char)6;
short var_4 = (short)10853;
long long int var_7 = -813045421911600060LL;
unsigned short var_13 = (unsigned short)27103;
long long int var_14 = -3864318151056202400LL;
int var_15 = 1301469516;
int zero = 0;
unsigned int var_17 = 3020032057U;
int var_18 = -1677818629;
unsigned short var_19 = (unsigned short)3966;
short var_20 = (short)-4512;
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
