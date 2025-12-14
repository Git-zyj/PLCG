#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
short var_5 = (short)16076;
int var_7 = 1494197804;
unsigned short var_9 = (unsigned short)9294;
unsigned short var_11 = (unsigned short)40960;
short var_12 = (short)27691;
unsigned char var_13 = (unsigned char)156;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 630609600;
long long int var_16 = 550083970069888702LL;
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
