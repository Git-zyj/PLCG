#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1704463640;
unsigned short var_2 = (unsigned short)16533;
unsigned char var_4 = (unsigned char)93;
unsigned int var_5 = 2235958427U;
long long int var_6 = 3283310314008732486LL;
long long int var_11 = 2317608583191345501LL;
int var_17 = -1296864231;
int zero = 0;
short var_18 = (short)-32467;
unsigned short var_19 = (unsigned short)39278;
unsigned char var_20 = (unsigned char)133;
void init() {
}

void checksum() {
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
