#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6879422157029551865LL;
short var_6 = (short)23172;
unsigned short var_7 = (unsigned short)49138;
unsigned short var_13 = (unsigned short)9728;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1994958074U;
int zero = 0;
signed char var_16 = (signed char)18;
int var_17 = 1700545618;
unsigned char var_18 = (unsigned char)199;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
