#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1921158764236126797LL;
int var_2 = 1604792879;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)100;
int zero = 0;
unsigned int var_16 = 2313584414U;
unsigned int var_17 = 93013817U;
unsigned short var_18 = (unsigned short)28296;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)44366;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
